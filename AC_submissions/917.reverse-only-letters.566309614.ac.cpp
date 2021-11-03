/*
 * @lc app=leetcode id=917 lang=cpp
 *
 * [917] Reverse Only Letters
 */

// @lc code=start
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string res(s.size(), '\0');
        stack<char> st;
        for(auto ch : s)
            if(isalpha(ch))
                st.push(ch);
        int i = 0;
        for(auto ch : s){
            if(isalpha(ch)){
                res[i++] = st.top();
                st.pop();
            }
            else res[i++] = ch;
        }
        return res;
    }
};
// @lc code=end
