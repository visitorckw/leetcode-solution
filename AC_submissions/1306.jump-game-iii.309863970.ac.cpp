/*
 * @lc app=leetcode id=1306 lang=cpp
 *
 * [1306] Jump Game III
 */

// @lc code=start
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        bool visit[arr.size()] = {false};
        stack<int> st;
        st.push(start);
        int temp;
        while(!st.empty())
        {
            temp = st.top();
            st.pop();
            visit[temp] = true;
            if(!arr[temp])
                return true;
            if(temp - arr[temp] >= 0 && !visit[temp - arr[temp]])
                st.push(temp - arr[temp]);
            if(temp + arr[temp] < arr.size() && !visit[temp + arr[temp]])
                st.push(temp + arr[temp]);
        }
        return false;
    }
};
// @lc code=end
