/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        bool visit[rooms.size()] = {};
        stack<int>st;
        st.push(0);
        int node;
        while(!st.empty())
        {
            node = st.top();
            st.pop();
            visit[node] = true;
            for(auto i : rooms[node])
                if(!visit[i])
                    st.push(i);
        }
        for(auto i = 0; i < rooms.size(); i++)
            if(!visit[i])
                return false;
        return true;
    }
};
// @lc code=end
