/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution {
public:
    struct node
    {
        int index;
        int val;
        bool operator <(node n1)
        {
            return val < n1.val;
        }
    };
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<node>arr;
        node temp;
        for(int i = 0; i < nums.size(); i++)
        {
            temp.index = i;
            temp.val = nums[i];
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        nums[arr[0].index] = 0;
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i].val == arr[i-1].val)
                nums[arr[i].index] = nums[arr[i-1].index];
            else
                nums[arr[i].index] = i;
        }
        return nums;
    }
};
// @lc code=end
