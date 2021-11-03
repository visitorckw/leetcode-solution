/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt[2] = {};
        queue<int> que;
        stack<int> st;
        for(auto s : students){
            que.push(s);
            cnt[s]++;
        }
        for(int i = sandwiches.size() - 1; i >= 0; i--)
            st.push(sandwiches[i]);
        while(!que.empty()){
            if((!cnt[0] and !st.top()) or (!cnt[1] and st.top() == 1))
                break;
            if(!(que.front() ^ st.top())){
                cnt[st.top()]--;
                que.pop();
                st.pop();
            }
            else{
                int temp = que.front();
                que.pop();
                que.push(temp);
            }
        }
        return que.size();
    }
};
// @lc code=end
