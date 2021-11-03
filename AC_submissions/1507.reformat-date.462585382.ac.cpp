/*
 * @lc app=leetcode id=1507 lang=cpp
 *
 * [1507] Reformat Date
 */

// @lc code=start
class Solution {
public:
    unordered_map<string, string> table;
    void init(){
        table["Jan"] = "01";
        table["Feb"] = "02";
        table["Mar"] = "03";
        table["Apr"] = "04";
        table["May"] = "05";
        table["Jun"] = "06";
        table["Jul"] = "07";
        table["Aug"] = "08";
        table["Sep"] = "09";
        table["Oct"] = "10";
        table["Nov"] = "11";
        table["Dec"] = "12";
    }
    string reformatDate(string date) {
        init();
        string s[3];
        int p = 0;
        for(int i = 0; i < date.size(); i++){
            if(date[i] == ' '){
                ++p;
                continue;
            }
            else if(p == 1)
                s[p].push_back(date[i]);
            else if('0' <= date[i] and date[i] <= '9')
                s[p].push_back(date[i]);
        }
        if(atoi(s[0].c_str()) < 10)
            s[0] = "0" + s[0];
        return s[2] + "-" + table[s[1]] + "-" + s[0];
    }
};
// @lc code=end
