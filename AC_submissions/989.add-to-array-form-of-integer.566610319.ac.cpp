/*
 * @lc app=leetcode id=989 lang=cpp
 *
 * [989] Add to Array-Form of Integer
 */

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string str = to_string(k);
        vector<int> res;
        reverse(num.begin(), num.end());
        reverse(str.begin(), str.end());
        bool carry = false;
        const int size = min(num.size(), str.size());
        for(int i = 0; i < size; i++){
            int x = num[i] + str[i] - '0' + carry;
            if(x >= 10){
                carry = true;
                x -= 10;
            }
            else carry = false;
            res.push_back(x);
        }
        for(int i = size; i < num.size(); i++){
            int x = num[i] + carry;
            if(x >= 10){
                carry = true;
                x -= 10;
            }
            else carry = false;
            res.push_back(x);
        }
        for(int i = size; i < str.size(); i++){
            int x = str[i] - '0' + carry;
            if(x >= 10){
                carry = true;
                x -= 10;
            }
            else carry = false;
            res.push_back(x);
        }
        if(carry) res.push_back(1);
        while(!res.empty() && !res.back()) res.pop_back();
        if(res.empty()) return {0};
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
