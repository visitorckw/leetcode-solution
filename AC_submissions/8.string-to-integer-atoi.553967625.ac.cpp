/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        posmax = to_string(INT_MAX);
        negmax = to_string(INT_MIN);
        negmax.erase(negmax.begin());
        
        reverse(s.begin(), s.end());
        while(!s.empty()){
            if(s.back() == ' ') s.pop_back();
            else break;
        }
        int sign = 1;
        if(!s.empty() and s.back() == '+'){
            sign = 1;
            s.pop_back();
        }
        else if(!s.empty() and s.back() == '-'){
            sign = -1;
            s.pop_back();
        }
        reverse(s.begin(), s.end());
        cout << s;
        string str;
        for(auto ch : s){
            if('0' <= ch && ch <= '9')
                str += ch;
            else break;
        }
        reverse(str.begin(), str.end());
        while(!str.empty() && str.back() == '0')
            str.pop_back();
        reverse(str.begin(), str.end());
        if(outOfRange(str, sign)){
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        if(str.empty()) return 0;
        if(str == "2147483648" && sign == -1)
            return -2147483648;
        return sign * stoi(str);
    }
private:
    string posmax;
    string negmax;
    bool outOfRange(string &str, int &sign){
        if(sign == 1){
            if(str.size() > posmax.size())
                return true;
            if(str.size() < posmax.size())
                return false;
            return str > posmax;
        }
        else{
            if(str.size() > negmax.size())
                return true;
            if(str.size() < negmax.size())
                return false;
            return str > negmax;
        }
    }
};
// @lc code=end
