/*
 * @lc app=leetcode id=1442 lang=cpp
 *
 * [1442] Count Triplets That Can Form Two Arrays of Equal XOR
 */

// @lc code=start
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        if(arr.size() <= 1) return 0;
        int ans = 0;
        int pre[arr.size() + 1];
        pre[0] = 0;
        for(int i = 1; i <= arr.size(); i++) pre[i] = pre[i-1] ^ arr[i-1];
        for(int i = 0; i < arr.size(); i++){
            for(int j = i + 1; j < arr.size(); j++){
                for(int k = j; k < arr.size(); k++){
                    int a = 0, b = 0;
                    a = pre[i] ^ pre[j];
                    b = pre[j] ^ pre[k+1];
                    if(a == b) ans++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
