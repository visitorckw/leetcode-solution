/*
 * @lc app=leetcode id=1806 lang=cpp
 *
 * [1806] Minimum Number of Operations to Reinitialize a Permutation
 */

// @lc code=start
class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>init(n);
        vector<int>perm(n);
        vector<int>arr(n);
        int res = 0;
        for(int i = 0; i < n; i++)
            perm[i] = i;
        init = perm;
        while(true){
            for(int i = 0; i < n; i++){
                if(i & 1) arr[i] = perm[n/2+(i-1)/2];
                else arr[i] = perm[i/2];
            }
            ++res;
            perm = arr;
            if(init == perm) break;
        }
        return res;
    }
};
// @lc code=end
