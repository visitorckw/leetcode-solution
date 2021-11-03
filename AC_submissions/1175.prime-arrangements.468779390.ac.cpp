/*
 * @lc app=leetcode id=1175 lang=cpp
 *
 * [1175] Prime Arrangements
 */

// @lc code=start
class Solution {
public:
    int numPrimeArrangements(int n) {
        vector<bool> prime(105, true);
        prime[0] = prime[1] = false;
        for(int i = 2; i <= 10; i++){
            if(prime[i]){
                for(int j = i * i; j <= 100; j += i){
                    prime[j] = false;
                }
            }
        }
        int a = 0, b = 0, ans = 0;
        long long int pro = 1;
        for(int i = 1; i <= n; i++)
            if(prime[i]) a++;
            else b++;
        for(int i = a; i >= 1; i--)
            pro = pro * i % 1000000007;
        ans += pro;
        pro = 1;
        for(int i = b; i >= 1; i--)
            pro = pro * i % 1000000007;
        ans = (ans * pro) % 1000000007;
        return ans;
    }
};
// @lc code=end
