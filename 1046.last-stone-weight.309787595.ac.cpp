/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto i : stones)
            pq.push(i);
        int x, y;
        while(pq.size() >= 2)
        {
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            if(x != y)
                pq.push(abs(x-y));
        }
        if(pq.empty())
            return 0;
        return pq.top();
    }
};
// @lc code=end
