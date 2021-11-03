/*
 * @lc app=leetcode id=1042 lang=cpp
 *
 * [1042] Flower Planting With No Adjacent
 */

// @lc code=start
class Solution {
public:
    
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<int>graph[N];
        vector<int>ans(N,0);
        for(int i = 0 ; i < paths.size(); i++)
        {
            graph[paths[i][0]-1].push_back(paths[i][1] - 1);
            graph[paths[i][1]-1].push_back(paths[i][0] - 1);
        }
        bool used[5] = {false};
        for(int i = 0; i < N; i++)
        {
            // memset(used,sizeof(used),false);
            for(int j = 0; j < 5; j++)
                used[j] = false;
            for(int j = 0; j < graph[i].size(); j++)
                used[ans[graph[i][j]]] = true;
            for(int j = 1; j < 5; j++)
                if(!used[j])
                {
                    ans[i] = j;
                    break;
                }
        }
        return ans;
    }
};
// @lc code=end
