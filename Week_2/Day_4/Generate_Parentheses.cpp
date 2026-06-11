class Solution {
public:

    // open  = number of '(' used so far
    // close = number of ')' used so far
    // curr  = current parentheses string being formed
    // ans   = stores all valid combinations
    void solve(int open, int close, int n, string curr,
               vector<string>& ans) {

        // Base Case:
        // If length becomes 2*n, we have formed a valid string
        if (curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // We can add '(' only if we have not used all n opening brackets
        if (open < n) {
            solve(open + 1, close, n, curr + '(', ans);
        }

        // We can add ')' only if opening brackets are more than closing brackets
        // This ensures the string never becomes invalid
        if (close < open) {
            solve(open, close + 1, n, curr + ')', ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        // Start with 0 opening and 0 closing brackets
        solve(0, 0, n, "", ans);

        return ans;
    }
};
