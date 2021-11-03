/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    int ctr[26] = {};
    int cnt[26] = {};
    
    bool checkInclusion(string s1, string s2) {
        int count = 0;
        if(s1.size() > s2.size()) return false;
        for(char ch : s1) ctr[ch - 'a']++;
        for(int i = 0; i < s1.size(); i++)
            cnt[s2[i] - 'a']++;
        for(int i = 0; i < 26; i++)
            if(ctr[i] == cnt[i]) ++count;
        int L = 0, R = s1.size();
        while(true){
            if(count == 26) return true;
            if(R >= s2.size()) break;
            if(cnt[s2[L] - 'a'] == ctr[s2[L] - 'a']) --count;
            if(cnt[s2[R] - 'a'] == ctr[s2[R] - 'a']) --count;
            cnt[s2[L]-'a']--;
            cnt[s2[R]-'a']++;
            if(cnt[s2[L] - 'a'] == ctr[s2[L] - 'a']) ++count;
            if(cnt[s2[R] - 'a'] == ctr[s2[R] - 'a']) ++count;
            L++;
            R++;
        }
        return false;
    }
};
// @lc code=end
