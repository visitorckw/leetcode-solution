/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() > b.size()){
            string temp(a.size() - b.size(), '0');
            b = temp + b;
        }
        else if(a.size() < b.size()){
            string temp(b.size() - a.size(), '0');
            a = temp + a;
        }
        string ans;
        bool add = false;
        for(int i = a.size() - 1; i >= 0; i--){
            int num = a[i] + b[i] - ('0' * 2) + add;
            if(num >= 2){
                add = true;
                num -= 2;
            }
            else add = false;
            ans += (num + '0');
        }
        if(add) ans += '1';
        while(!ans.empty() and ans.back() == '0') ans.pop_back();
        if(ans.empty()) return "0";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
