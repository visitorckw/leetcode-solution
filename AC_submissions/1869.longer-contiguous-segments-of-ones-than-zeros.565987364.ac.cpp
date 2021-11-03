/*
 * @lc app=leetcode id=1869 lang=cpp
 *
 * [1869] Longer Contiguous Segments of Ones than Zeros
 */

// @lc code=start
class Solution {
public:
    bool checkZeroOnes(string s) {
        int one = 0;
        int zero = 0;
        int ctr = 0;
        char prev = 'a';
        for(auto ch : s){
            if(ch == prev) ++ctr;
            else{
                if(prev == '1') one = max(one, ctr);
                else if(prev == '0') zero = max(zero, ctr);
                ctr = 1;
            }
            prev = ch;
        }
        if(prev == '1') one = max(one, ctr);
        else if(prev == '0') zero = max(zero, ctr);
        return one > zero;
    }
};
// @lc code=end
