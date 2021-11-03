/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
public:
    string plus(string str1, string str2){ //string in reverse
        int add = 0;
        string ans;
        if(str1.size() < str2.size())
            swap(str1, str2);
        if(str2 == "0") return str1;
        for(int i = 0; i < str1.size(); i++){
            if(i < str2.size()){
                ans += ((str1[i] + str2[i] - 2 * '0' + add) % 10 + '0');
                add = str1[i] + str2[i] - 2 * '0' + add >= 10;
            }
            else{
                ans += ((str1[i] - '0' + add) % 10 + '0');
                add = (str1[i] - '0' + add) >= 10;
            }
        }
        if(add) ans += '1';
        return ans;
    }
    string multiply(string num1, string num2) {
        if(num1 == "0" or num2 == "0") return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int add = 0;
        string ans = "0";
        for(int i = 0; i < num1.size(); i++){
            if(num1[i] == '0') continue;
            string tmp(i, '0');
            add = 0;
            for(int j = 0; j < num2.size(); j++){
                tmp += (((num1[i] - '0') * (num2[j] - '0') + add) % 10) + '0';
                add = ((num1[i] - '0') * (num2[j] - '0') + add) / 10;
            }
            if(add) tmp += (add + '0');
            ans = plus(tmp , ans);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
