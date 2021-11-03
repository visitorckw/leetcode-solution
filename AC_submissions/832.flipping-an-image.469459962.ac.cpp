/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto & vec : image){
            reverse(vec.begin(), vec.end());
            for(auto & x : vec)
                x = (!x);
        }
        return image;
    }
};
// @lc code=end
