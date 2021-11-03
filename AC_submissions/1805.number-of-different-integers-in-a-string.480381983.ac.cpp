/*
 * @lc app=leetcode id=1805 lang=cpp
 *
 * [1805] Number of Different Integers in a String
 */

// @lc code=start
class Solution {
public:
    unordered_set<string> table;
    int numDifferentIntegers(string word) {
        string str;
        for(auto ch : word){
            if('0' <= ch and ch <= '9')
                str += ch;
            else if(!str.empty()){
                int p = 0;
                while(str[p] == '0') ++p;
                str = str.substr(p);
                if(!table.count(str))
                    table.insert(str);
                str.clear();
            }
        }
        if(!str.empty()){
            int p = 0;
            while(str[p] == '0') ++p;
            str = str.substr(p);
            if(!table.count(str))
                table.insert(str);
            str.clear();
        }
        return table.size();
    }
};
// @lc code=end
