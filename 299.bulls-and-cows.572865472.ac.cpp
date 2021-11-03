/*
 * @lc app=leetcode id=299 lang=cpp
 *
 * [299] Bulls and Cows
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {
        int A = 0;
        int B = 0;
        int ctrL[10] = {};
        int ctrR[10] = {};
        const int len = secret.size();
        for(int i = 0; i < len; i++){
            if(secret[i] == guess[i]) ++A;
            else{
                ctrL[secret[i]-'0']++;
                ctrR[guess[i]-'0']++;
            }
        }
        for(int i = 0; i < 10; i++)
            B += min(ctrL[i], ctrR[i]);
        return to_string(A) + "A" + to_string(B) + "B";
    }
};
// @lc code=end
