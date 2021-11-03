/*
 * @lc app=leetcode id=1765 lang=cpp
 *
 * [1765] Map of Highest Peak
 */

// @lc code=start
pair<int, int> operator+(pair<int,int>&p1, pair<int,int>&p2){
        return make_pair(p1.first+p2.first, p1.second+p2.second);
    }
class Solution {
public:
    
    pair<int,int> dir[4] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        vector<vector<int>> ans(isWater.size(), vector<int>(isWater[0].size(),-1));
        queue<pair<int,int>> que;
        for(int x = 0; x < isWater.size(); x++){
            for(int y = 0; y < isWater[0].size(); y++){
                if(isWater[x][y]){
                    que.push(make_pair(x,y));
                    ans[x][y] = 0;
                }
            }
        }
        while(!que.empty()){
            pair<int,int>cor = que.front();
            pair<int,int> temp;
            que.pop();
            for(int i = 0; i < 4; i++){
                temp = cor + dir[i];
                if(0 <= temp.first && temp.first < isWater.size() && 0 <= temp.second && temp.second < isWater[0].size()){
                    if(ans[temp.first][temp.second] >= 0) continue;
                    
                    else {
                        ans[temp.first][temp.second] = ans[cor.first][cor.second] + 1;
                        que.push(temp);
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end
