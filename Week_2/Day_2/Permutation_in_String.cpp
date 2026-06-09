class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;

        vector<int> need(26, 0);
        vector<int> freq(26, 0);

        for (char ch : s1) {
            need[ch - 'a']++;
        }

        int i = 0;

        for (int j = 0; j < m; j++) {
            freq[s2[j] - 'a']++;

            if (j - i + 1 > n) {
                freq[s2[i] - 'a']--;
                i++;
            }

            if (j - i + 1 == n) {
                bool ok = true;

                for (int k = 0; k < 26; k++) {
                    if (need[k] != freq[k]) {
                        ok = false;
                        break;
                    }
                }

                if (ok) return true;
            }
        }

        return false;
    }
};
