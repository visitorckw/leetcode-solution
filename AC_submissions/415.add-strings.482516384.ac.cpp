/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.size() > num2.size()){
            string temp(num1.size() - num2.size(), '0');
            num2 = temp + num2;
        }
        else{
            string temp(num2.size() - num1.size(), '0');
            num1 = temp + num1;
        }
        bool add = false;
        int num;
        string ans(num1.size(), '0');
        for(int i = num1.size() - 1; i >= 0; i--){
            num = num1[i] + num2[i] + add - ('0' << 1);
            if(num >= 10) {
                add = true;
                num -= 10;
            }
            else add = false;
            ans[i] = num + '0';
        }
        if(add) ans = "1" + ans;
        while(!ans.empty() and ans.front() == '0')
            ans.erase(ans.begin());
        if(ans.empty()) return "0";
        return ans;
    }
};
// @lc code=end
