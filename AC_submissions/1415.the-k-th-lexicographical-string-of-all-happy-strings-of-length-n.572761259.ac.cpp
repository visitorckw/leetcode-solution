/*
 * @lc app=leetcode id=1415 lang=cpp
 *
 * [1415] The k-th Lexicographical String of All Happy Strings of Length n
 */

// @lc code=start
class Solution {
public:
    vector<string>vec;
    string str;
    void dfs(int x, int n, int k){
        if(k == vec.size()) return;
        if(x == n){
            vec.push_back(str);
            return;
        }
        if(!x || str[x-1] != 'a'){
            str[x] = 'a';
            dfs(x+1, n, k);
        }
        if(!x || str[x-1] != 'b'){
            str[x] = 'b';
            dfs(x+1, n, k);
        }
        if(!x || str[x-1] != 'c'){
            str[x] = 'c';
            dfs(x+1, n, k);
        }
    }
    string getHappyString(int n, int k) {
        str.assign(n, 'a');
        dfs(0, n, k);
        // for(auto s : vec) cout << s << '\n';
        if(k-1 >= vec.size()) return "";
        // sort(vec.begin(), vec.end());
        return vec.back();
    }
};
// @lc code=end
