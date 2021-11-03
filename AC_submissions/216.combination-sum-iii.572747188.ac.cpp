/*
 * @lc app=leetcode id=216 lang=cpp
 *
 * [216] Combination Sum III
 */

// @lc code=start
class Solution {
public:
    bool state[10];
    int n;
    vector<vector<int>>res;
    void dfs(int x, int k, int sum){
        if(sum > n) return;
        if(x >= 10 || !k || sum == n){
            if(!k && sum == n){
                vector<int>vec;
                for(int i = 1; i < 10; i++){
                    if(state[i]) vec.push_back(i); 
                }
                res.push_back(vec);
            }
            return;
        }
        dfs(x+1, k, sum);
        state[x] = true;
        dfs(x+1, k-1, sum + x);
        state[x] = false;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        this->n = n;
        dfs(1, k, 0);
        return res;
    }
};
// @lc code=end
