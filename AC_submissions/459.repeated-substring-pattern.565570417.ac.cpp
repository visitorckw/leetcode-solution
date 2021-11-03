/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        const int size = s.size();
        for(int k = size / 2; k > 0; k--){
            if(size % k) continue;
            bool flag = true;
            const string sub = s.substr(0, k);
            for(int i = 0; i < size; i += k){
                if(!flag) break;
                for(int j = 0; j < k; j++){
                    if(s[i+j] != sub[j]){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                // cout << sub << '\n';
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
