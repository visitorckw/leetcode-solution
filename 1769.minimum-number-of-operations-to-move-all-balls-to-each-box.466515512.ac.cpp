/*
 * @lc app=leetcode id=1769 lang=cpp
 *
 * [1769] Minimum Number of Operations to Move All Balls to Each Box
 */

// @lc code=start
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(), 0);
        for(int i = 0; i < boxes.size(); i++)
            for(int j = 0; j < boxes.size(); j++)
                if(boxes[j] == '1')
                    ans[i] += abs(i-j);
        return ans;
    }
};
// @lc code=end
