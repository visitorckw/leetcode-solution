/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start
class Solution {
public:
    bool check(const char &ch){
        switch(ch){
            case 'a':
                return true;
            case 'e':
                return true;
            case 'i':
                return true;
            case 'o':
                return true;
            case 'u':
                return true;
            default:
                return false;
        }
    }
    int maxVowels(string s, int k) {
        int ans = 0;
        int now;
        for(int i = 0; i < k && i < s.size(); ++i)
            if(check(s[i]))
                ++ans;
        now = ans;
        for(int i = 1; i < s.size() - k + 1; ++i){
            if(check(s[i-1]))
                --now;
            if(check(s[i+k-1]))
                ++now;
            ans = max(ans,now);
        }
        return ans;
    }
};
// @lc code=end
