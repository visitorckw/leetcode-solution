/*
 * @lc app=leetcode id=2042 lang=cpp
 *
 * [2042] Check if Numbers Are Ascending in a Sentence
 */

// @lc code=start
class Solution {
public:
    bool areNumbersAscending(string s) {
        int pre = -1;
        bool start = false;
        string str;
        for(auto ch : s){
            if(isdigit(ch)){
                if(!start){
                    start = true;
                    str.clear();
                    str += ch;
                }
                else str += ch;
            }
            else if(start){
                int num = stoi(str);
                start = false;
                str.clear();
                if(num <= pre) return false;
                pre = num;
            }
        }
        if(start && !str.empty()){
            int num = stoi(str);
            if(num <= pre) return false;
        }
        return true;
    }
};
// @lc code=end
