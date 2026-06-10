class Solution {
public:
    bool isSubsequence(string s, string t) {

        // i -> pointer for string s
        // j -> pointer for string t
        int i = 0;
        int j = 0;

        // Traverse both strings
        while(i < s.size() && j < t.size()) {

            // If characters match,
            // move to next character in s
            if(s[i] == t[j]) {
                i++;
            }

            // Always move j
            j++;
        }

        // If all characters of s are matched,
        // i will reach the end of s
        return i == s.size();
    }
};
