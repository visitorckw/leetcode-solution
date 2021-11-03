/*
 * @lc app=leetcode id=1909 lang=cpp
 *
 * [1909] Remove One Element to Make the Array Strictly Increasing
 */

// @lc code=start
class Solution {
public:
    bool isSort(vector<int>&vec,const int hide){
        if(hide == -1){
            for(int i = 1; i < vec.size(); i++)
                if(vec[i] <= vec[i-1])
                    return false;
            return true;
        }
        for(int i = 1; i < vec.size(); i++){
            if(i == hide) continue;
            if(i == hide + 1){
                if(i >= 2 and vec[i] <= vec[i-2])
                    return false;
                continue;
            }
            if(vec[i] <= vec[i-1])
                return false;
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        // cout << "in";
        if(isSort(nums, -1)) return true;
        // cout << isSort(nums, 2);
        for(int i = 0; i < nums.size(); i++){
            // cout << "IN loop \n";
            // cout << i << ' ' << isSort(nums, i) << '\n';
            if(isSort(nums, i))
                return true;
        }
        return false;
    }
};
// @lc code=end
