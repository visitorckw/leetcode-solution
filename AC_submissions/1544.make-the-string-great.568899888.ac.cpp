/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(auto ch : s){
            if(isupper(ch) && !st.empty() && st.top() == tolower(ch)) st.pop();
            else if(islower(ch) && !st.empty() && st.top() == toupper(ch)) st.pop();
            else st.push(ch);
        }
        s.clear();
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
// @lc code=end
