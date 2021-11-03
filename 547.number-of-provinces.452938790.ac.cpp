/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    int p[210];
    int find(int x){
        return x == p[x] ? x : (p[x] = find(p[x]));
    }
    void Union(int x, int y){
        x = find(x);
        y = find(y);
        p[x] = y;
    }
    bool same(int x, int y){
        return find(x) == find(y);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = isConnected.size();
        for(int i = 0; i < isConnected.size() + 1; i++)
            p[i] = i;
        for(int x = 0; x < isConnected.size(); x++){
            for(int y = 0; y < isConnected.size(); y++){
                if(isConnected[x][y] && !same(x,y)){
                    Union(x,y);
                    ans--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
