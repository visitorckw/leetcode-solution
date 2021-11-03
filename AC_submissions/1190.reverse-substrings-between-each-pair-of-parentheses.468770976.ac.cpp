/*
 * @lc app=leetcode id=1190 lang=cpp
 *
 * [1190] Reverse Substrings Between Each Pair of Parentheses
 */

// @lc code=start
class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        queue<char> que;
        for(auto ch : s){
            if(ch == ')'){
                while(st.top() != '('){
                    que.push(st.top());
                    st.pop();
                }
                st.pop();
                while(!que.empty()){
                    st.push(que.front());
                    que.pop();
                }
            }
            else st.push(ch);
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
