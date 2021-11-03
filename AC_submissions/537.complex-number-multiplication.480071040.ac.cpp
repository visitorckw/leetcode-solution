/*
 * @lc app=leetcode id=537 lang=cpp
 *
 * [537] Complex Number Multiplication
 */

// @lc code=start
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string AR, AI, BR, BI;
        bool flag;
        flag = false;
        for(auto ch : a){
            if(!flag and ch == '+'){
                flag = true;
                continue;
            }
            if(!flag) AR += ch;
            else AI += ch;
        }
        flag = false;
        for(auto ch : b){
            if(!flag and ch == '+'){
                flag = true;
                continue;
            }
            if(!flag) BR += ch;
            else BI += ch;
        }
        int ar, ai, br, bi;
        ar = stoi(AR);
        ai = stoi(AI);
        br = stoi(BR);
        bi = stoi(BI);
        int real, img;
        real = ar * br - ai * bi;
        img = ar * bi + ai * br;
        return to_string(real) + "+" + to_string(img) + "i";
    }
};
// @lc code=end
