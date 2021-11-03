/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution {
public:
    pair<bool, bool> half(bool a, bool b){
        return make_pair( a ^ b, a & b);
    }
    pair<bool, bool> full(bool a, bool b, bool c){
        bool carry;
        bool out;
        pair<bool, bool>tmp = half(a, b);
        out = tmp.first;
        carry = tmp.second;
        tmp = half(out, c);
        carry = carry | tmp.second;
        out = tmp.first;
        return make_pair(out, carry);
    }
    int getSum(int a, int b) {
        bool carry = false;
        int ans = 0;
        pair<bool,bool>tmp;
        int mask = 1;
        while(true){
            tmp = full(a & mask, b & mask, carry);
            if(tmp.first){
                ans |= mask;
            }
            carry = tmp.second;
            if(mask == (1 << 31)) break;
            mask <<= 1;
        }
        return ans;
    }
};
// @lc code=end
