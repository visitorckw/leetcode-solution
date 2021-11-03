/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
 */

// @lc code=start
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int cnt[N+1] = {0};
        bool child[N+1] = {false};
        for(int i = 0; i < trust.size(); i++)
        {
            child[trust[i][0]] = true;
            cnt[trust[i][1]]++;
        }
        for(int i = 1; i <= N; i++)
            if(cnt[i] == N-1 && !child[i])
                return i;
    
        return -1;
    }
};
// @lc code=end
