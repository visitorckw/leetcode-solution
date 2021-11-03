/*
 * @lc app=leetcode id=1079 lang=cpp
 *
 * [1079] Letter Tile Possibilities
 */

// @lc code=start
class Solution {
public:
    set<string> table;
    void dfs(const string tiles, string str, int p){
        if(p >= tiles.size()){
            sort(str.begin(), str.end());
            if(str.empty() or table.count(str))
                return;
            table.insert(str);
            return;
        }
        dfs(tiles, str, p+1);
        str += tiles[p];
        dfs(tiles, str, p+1);
    }
    int numTilePossibilities(string tiles) {
        dfs(tiles,"",0);
        int ans = 0;
        for(auto it = table.begin(); it != table.end(); it++){
            string str = *it;
            do{
                // cout << str << '\n';
                ++ans;
            }while(next_permutation(str.begin(), str.end()));
        }
        return ans;
    }
};
// @lc code=end
