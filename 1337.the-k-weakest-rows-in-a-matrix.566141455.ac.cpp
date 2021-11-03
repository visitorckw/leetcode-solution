/*
 * @lc app=leetcode id=1337 lang=cpp
 *
 * [1337] The K Weakest Rows in a Matrix
 */

// @lc code=start
struct node{
    int index;
    int man;
    bool operator<(const node& n){
        return man == n.man ? index < n.index : man < n.man;
    }
};
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<node> vec(mat.size());
        for(int i = 0; i < mat.size(); i++){
            vec[i].index = i;
            vec[i].man = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j]) ++vec[i].man;
                else break;
            }
        }
        sort(vec.begin(), vec.end());
        vector<int> res(k);
        for(int i = 0; i < k; i++)
            res[i] = vec[i].index;
        return res;
    }
};
// @lc code=end
