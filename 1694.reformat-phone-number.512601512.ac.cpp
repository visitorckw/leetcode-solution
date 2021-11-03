/*
 * @lc app=leetcode id=1694 lang=cpp
 *
 * [1694] Reformat Phone Number
 */

// @lc code=start
class Solution {
public:
    string reformatNumber(string number) {
        string tmp;
        for(auto ch : number)
            if(ch != ' ' and ch != '-')
                tmp += ch;
        number.clear();
        if(tmp.size() % 3 != 1){
            for(int i = 0; i < tmp.size(); i++){
                if(i % 3 == 0 and i)
                    number += '-';
                number += tmp[i];
            }
        }
        else{
            for(int i = 0; i < tmp.size(); i++){
                if(i % 3 == 0 and i and i < tmp.size() - 2)
                    number += '-';
                if(i == tmp.size() - 2)
                    number += '-';
                number += tmp[i];
            }
        }
        return number;
    }
};
// @lc code=end
