/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    unordered_map<int,int>table;
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
            if(table[i])
            {
                table[i]--;
                temp[n] = i;
                backtrack(n+1);
                table[i]++;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        for(auto i:nums) table[i] = 0;
        for(auto i:nums) 
        {
            if(!table[i]) number.push_back(i);
            table[i]++;
        }
        temp.reserve(nums.size());
        size = nums.size();
        for(int i = 0; i < size; i++) temp.push_back(0);
        backtrack(0);
        return ans;
    }
};
// @lc code=end
