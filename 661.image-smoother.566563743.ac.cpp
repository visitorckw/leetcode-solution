/*
 * @lc app=leetcode id=661 lang=cpp
 *
 * [661] Image Smoother
 */

// @lc code=start
class Solution {
public:
    int m, n;
    bool out(const int& x, const int& y){
        return x < 0 || y < 0 || x >= m || y >= n;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        m = img.size();
        n = img[0].size();
        vector<vector<int>>res(m, vector<int>(n, 0));
        for(int x = 0; x < m; x++){
            for(int y = 0; y < n; y++){
                int ctr = 0;
                int sum = 0;
                for(int i = -1; i <= 1; i++){
                    for(int j = -1; j <= 1; j++){
                        const int r = x + i;
                        const int c = y + j;
                        if(!out(r,c)){
                            ++ctr;
                            sum += img[r][c];
                        }
                    }
                }
                res[x][y] = sum / ctr;
            }
        }
        return res;
    }
};
// @lc code=end
