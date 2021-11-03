/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int L = s.size() - 1, R = t.size() - 1;
        int delL = 0, delR = 0;
        while(L >= 0 && R >= 0){
            while(L >= 0){
                if(delL <= 0 && s[L] != '#') break;
                if(s[L] == '#') delL++;
                else delL--;
                L--;
            }
            while(R >= 0){
                if(delR <= 0 && t[R] != '#') break;
                if(t[R] == '#') delR++;
                else delR--;
                R--;
            }
            if(L < 0 || R < 0) break;
            cout << "L = " << L << '\n';
            cout << "R = " << R << '\n';
            cout << "s[L] = " << s[L] << '\n';
            cout << "t[R] = " << t[R] << '\n';
            cout << '\n';
            if(s[L] != t[R]) return false;
            L--;
            R--;
        }
        while(L >= 0){
            if(delL <= 0 && s[L] != '#') break;
            if(s[L] == '#') delL++;
            else delL--;
            L--;
        }
        while(R >= 0){
            if(delR <= 0 && t[R] != '#') break;
            if(t[R] == '#') delR++;
            else delR--;
            R--;
        }
        return L < 0 && R < 0;
    }
};
// @lc code=end
