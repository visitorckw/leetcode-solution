/*
 * @lc app=leetcode id=984 lang=cpp
 *
 * [984] String Without AAA or BBB
 */

// @lc code=start
class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string res;
        if(a == b){
            for(int i = 0; i < a; i++)
                res += "ab";
            return res;
        }
        if(a > b){
            const int extra = a - b - 1;
            for(int i = 0; i < b; i++){
                if(i < extra){
                    a--;
                    res += "aa";
                }
                else res += "a";
                a--;
                res += "b";
            }
            for(int i = 0; i < a; i++)
                res += 'a';
        }
        else{
            const int extra = b - a - 1;
            for(int i = 0; i < a; i++){
                if(i < extra){
                    b --;
                    res += "bb";
                }
                else res += "b";
                b--;
                res += "a";
            }
            for(int i = 0; i < b; i++)
                res += 'b';
        }
        return res;
    }
};
// @lc code=end
