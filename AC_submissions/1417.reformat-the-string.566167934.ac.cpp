/*
 * @lc app=leetcode id=1417 lang=cpp
 *
 * [1417] Reformat The String
 */

// @lc code=start
class Solution {
public:
    string reformat(string s) {
        int ctr1 = 0;
        int ctr2 = 0;
        int num[10] = {};
        int alpha[26] = {};
        for(auto ch : s){
            if(isalpha(ch)){
                ctr2++;
                alpha[ch-'a']++;
            }
            else{
                ctr1++;
                num[ch-'0']++;
            }
        }
        if(abs(ctr1 - ctr2) >= 2) return "";
        string res;
        int p1 = 0;
        int p2 = 0;
        if(ctr1 > ctr2){
            for(int i = 0; i < s.size(); i++){
                if(!(i & 1)){
                    while(!num[p1]) p1++;
                    res += p1 + '0';
                    num[p1]--;
                }
                else{
                    while(!alpha[p2]) p2++;
                    res += p2 + 'a';
                    alpha[p2]--;
                }
            }
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(i & 1){
                    while(!num[p1]) p1++;
                    res += p1 + '0';
                    num[p1]--;
                }
                else{
                    while(!alpha[p2]) p2++;
                    res += p2 + 'a';
                    alpha[p2]--;
                }
            }
        }
        return res;
    }
};
// @lc code=end
