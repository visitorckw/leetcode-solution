/*
 * @lc app=leetcode id=1282 lang=cpp
 *
 * [1282] Group the People Given the Group Size They Belong To
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,vector<int>> table;
    vector<vector<int>> res;
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        for(auto i = 0; i < groupSizes.size(); i++){
            table[groupSizes[i]].push_back(i);
        }
        for(auto g : table){
            vector<int>temp(g.first);
            for(int i = 0; i < g.second.size(); i++){
                temp[i%g.first] = g.second[i];
                if(i%g.first == g.first - 1){
                    res.push_back(temp);
                }
            }
        }
        return res;
    }
};
// @lc code=end
