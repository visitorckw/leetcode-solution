/*
 * @lc app=leetcode id=1287 lang=cpp
 *
 * [1287] Element Appearing More Than 25% In Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int pre = arr[0];
        int ctr = 1;
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] == pre)
            {
                ctr++;
                if(ctr > arr.size() / 4)
                    return pre;
            }
            else
            {
                pre = arr[i];
                ctr = 1;
            }
        }
        return pre;
    }
};
// @lc code=end
