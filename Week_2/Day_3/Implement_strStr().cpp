class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        // int n = s.size();

        for(int i= 1; i<= s.size()/ 2; i++) {

            if(s.size()% i != 0)
                continue;

            string sub = s.substr(0, i);

            string formed = "";

            int cnt = s.size() /i;

            for(int j = 0; j < cnt; j++) {
                formed = formed +sub;
            }

            if(formed == s)
                return true;
        }

        return false;
    }
};
