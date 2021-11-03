/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    int N,K;
    
    void backtracking(int d,int i)
    {
        if(d == K)
        {
            ans.push_back(temp);
            return;
        }
        for(; i <= N; i++)
        {
            temp[d] = i;
            backtracking(d + 1,i + 1);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        temp.reserve(k);
        for(int i = 0; i < k; i++) temp.push_back(0);
        N = n;
        K = k;
        backtracking(0,1);
        return ans;
    }
};
// @lc code=end
