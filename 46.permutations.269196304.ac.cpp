/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    unordered_map<int,bool>table;
    vector<int>temp;
    vector<int>number;
    int size;
    
    void backtrack(int n)
    {
        if(n == size)
        {
            ans.push_back(temp);
            return ;
        }
        for(auto i:number)
        {
            if(!table[i])
            {
                table[i] = true;
                temp[n] = i;
                backtrack(n+1);
                table[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        for(auto i:nums) table[i] = false;
        temp.reserve(nums.size());
        size = nums.size();
        for(int i = 0; i < size; i++) temp.push_back(0);
        number = nums;
        backtrack(0);
        return ans;
    }
};
// @lc code=end
