/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution {
public:
    unordered_map<char,int>table;
    void createTable()
    {
        table['q'] = 0;
        table['w'] = 0;
        table['e'] = 0;
        table['r'] = 0;
        table['t'] = 0;
        table['y'] = 0;
        table['u'] = 0;
        table['i'] = 0;
        table['o'] = 0;
        table['p'] = 0;
        table['a'] = 1;
        table['s'] = 1;
        table['d'] = 1;
        table['f'] = 1;
        table['g'] = 1;
        table['h'] = 1;
        table['j'] = 1;
        table['k'] = 1;
        table['l'] = 1;
        table['z'] = 2;
        table['x'] = 2;
        table['c'] = 2;
        table['v'] = 2;
        table['b'] = 2;
        table['n'] = 2;
        table['m'] = 2;
    }
    vector<string>ans;
    vector<string> findWords(vector<string>& words) {
        int target;
        createTable();
        bool flag;
        for(auto s : words)
        {
            if(s.empty())
            {
                ans.push_back(s);
                continue;
            }
            target = table[tolower(s.front())];
            flag = true;
            for(auto c : s)
            {
                if(table[tolower(c)] != target)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans.push_back(s);
        }
        return ans;
    }
};
// @lc code=end
