/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    vector<int>prime;
    bool is_prime(int n)
    {
        for(int i=0;i<prime.size();i++)
        {
            if(prime[i]>sqrt(n)) break;
            if(n%prime[i]==0) return false;
        }
        prime.push_back(n);
        return true;
    }
    int countPrimes(int n) {
        int cnt=0;
        for(int i=2;i<n;i++)
        {
            if(is_prime(i)) cnt++;
        }
        return cnt;
    }
};
// @lc code=end
