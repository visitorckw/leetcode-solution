/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int start,cur,pre,temp,next,ctr = 0;
        for(start = 0; ctr < nums.size(); start++)
        {
            cur = start;
            pre = nums[start];
            do
            {
                next = (cur + k) % nums.size();
                temp = nums[next];
                nums[next] = pre;
                pre = temp;
                cur = next;
                ctr++;
            }while(start != cur);
        }
    }
};
// @lc code=end
