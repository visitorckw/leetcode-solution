/*
 * @lc app=leetcode id=1814 lang=cpp
 *
 * [1814] Count Nice Pairs in an Array
 */

// @lc code=start
#define MOD ((long long int)(1e9+7))
#define LL long long
class Solution {
public:
    int rev(int x){
        int res = 0;
        while(x){
            res *= 10;
            res += x % 10;
            x /= 10;
        }
        return res;
    }
    int countNicePairs(vector<int>& nums) {
        vector<LL>arr(nums.size());
        for(int i = 0; i < nums.size(); i++)
            arr[i] = nums[i] - rev(nums[i]);
        unordered_map<LL, LL> mp;
        LL res = 0;
        for(auto x : arr){
            res = (res + mp[x]) % MOD;
            // res += mp[x];
            mp[x]++;
        }
        return res;
    }
};
// @lc code=end
