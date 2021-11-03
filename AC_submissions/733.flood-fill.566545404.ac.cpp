/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<bool> visit(image.size() * image[0].size(), false);
        int dir[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        const int color = image[sr][sc];
        stack<pair<int,int>>st;
        st.push(make_pair(sr, sc));
        while(!st.empty()){
            const pair<int, int>p = st.top();
            st.pop();
            visit[p.first*image[0].size()+p.second] = true;
            image[p.first][p.second] = newColor;
            for(int i = 0; i < 4; i++){
                const int r = p.first + dir[i][0];
                const int c = p.second + dir[i][1];
                if(r < 0 || c < 0 || r >= image.size() || c >= image[0].size()) continue;
                if(image[r][c] != color) continue;
                if(visit[r*image[0].size()+c]) continue;
                st.push(make_pair(r, c));
            }
        }
        return image;
    }
};
// @lc code=end
