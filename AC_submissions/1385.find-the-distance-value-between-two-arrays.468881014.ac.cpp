/*
 * @lc app=leetcode id=1385 lang=cpp
 *
 * [1385] Find the Distance Value Between Two Arrays
 */

// @lc code=start
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        sort(arr2.begin(), arr2.end());
        for(auto x : arr1){
            int L = 0, R = arr2.size() - 1;
            int m;
            bool flag = true;
            while(L <= R){
                m = (L + R) / 2;
                if(abs(x - arr2[m]) <= d){
                    flag = false;
                    break;
                }
                if(x < arr2[m]) R = m - 1;
                else L = m + 1;
            }
            if(flag) ans++;
        }
        return ans;
    }
};
// @lc code=end
