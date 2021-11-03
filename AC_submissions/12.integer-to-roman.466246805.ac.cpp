/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    string k[10];
    string h[10];
    string t[10];
    string s[10];
    int a,b,c,d;
    void init(){
        s[0] = t[0] = h[0] = k[0] = "";
        s[1] = "I";
        s[2] = "II";
        s[3] = "III";
        s[4] = "IV";
        s[5] = "V";
        s[6] = "VI";
        s[7] = "VII";
        s[8] = "VIII";
        s[9] = "IX";
        t[1] = "X";
        t[2] = "XX";
        t[3] = "XXX";
        t[4] = "XL";
        t[5] = "L";
        t[6] = "LX";
        t[7] = "LXX";
        t[8] = "LXXX";
        t[9] = "XC";
        h[1] = "C";
        h[2] = "CC";
        h[3] = "CCC";
        h[4] = "CD";
        h[5] = "D";
        h[6] = "DC";
        h[7] = "DCC";
        h[8] = "DCCC";
        h[9] = "CM";
        k[1] = "M";
        k[2] = "MM";
        k[3] = "MMM";
    }
    string intToRoman(int num) {
        a = num / 1000;
        b = num / 100 % 10;
        c = num / 10 % 10;
        d = num % 10;
        init();
        return k[a] + h[b] + t[c] + s[d];
    }
};
// @lc code=end
