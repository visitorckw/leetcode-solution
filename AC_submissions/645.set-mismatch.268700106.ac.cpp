/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution {
public:
    
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0, i, duplicate;
        const int size = nums.size();
        bool arr[nums.size()+1];
        memset(arr,false,sizeof(arr));
        for(i = 0; i < size; i++)
        {
            if(arr[nums[i]])
            {
                duplicate = nums[i];
                break;
            }
            else arr[nums[i]] = true;
            sum += nums[i];
        }
        for(i = i + 1; i < size; i++) sum += nums[i];
        return vector<int>({duplicate,size*(size+1)/2-sum});
    }
};
// @lc code=end
