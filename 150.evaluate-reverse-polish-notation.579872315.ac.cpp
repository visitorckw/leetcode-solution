/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    inline bool op(const string &str){
        if(str.size() != 1) return false;
        const char ch = str.front();
        if(ch == '+') return true;
        if(ch == '-') return true;
        if(ch == '*') return true;
        if(ch == '/') return true;
        return false;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(auto s : tokens){
            if(op(s)){
                const int y = stoi(st.top());
                st.pop();
                const int x = stoi(st.top());
                st.pop();
                if(s.front() == '+')
                    st.push(to_string(x+y));
                if(s.front() == '-')
                    st.push(to_string(x-y));
                if(s.front() == '*')
                    st.push(to_string(x*y));
                if(s.front() == '/')
                    st.push(to_string(x/y));
            }
            else st.push(s);
        }
        return stoi(st.top());
    }
};
// @lc code=end
