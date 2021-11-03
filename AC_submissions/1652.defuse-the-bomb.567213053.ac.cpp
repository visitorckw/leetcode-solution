/*
 * @lc app=leetcode id=1652 lang=cpp
 *
 * [1652] Defuse the Bomb
 */

// @lc code=start
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        const int N = code.size();
        int sign = k > 0 ? 1 : -1;
        k = abs(k);
        int pre = 0, post = 0;
        for(int i = 0; i < k; i++)
            post +=code[i];
        for(int i = 1; i <= k; i++)
            pre += code[N - i];
        vector<int> res(code.size(), 0);
        for(int i = 0; i < N; i++){
            post += -code[i] + code[(i+k)%N];
            if(!code[i]) res[i] = code[i];
            else if(sign * code[i] > 0) res[i] = post;
            else res[i] = pre;
            pre += code[i] - code[(N+i-k)%N];
        }
        return res;
    }
};
// @lc code=end
