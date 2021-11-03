/*
 * @lc app=leetcode id=1399 lang=cpp
 *
 * [1399] Count Largest Group
 */

// @lc code=start
class Solution {
public:
    unordered_map<int, int> table;
    int ans = 0;
    int countLargestGroup(int n) {
        for(int i = 1; i <= n; i++){
            int temp = i;
            int sum = 0;
            while(temp){
                sum += temp % 10;
                temp /= 10;
            }
            table[sum]++;
            if(table[sum] > ans)
                ans = table[sum];
        }
        int res = 0;
        for(auto it : table){
            if(it.second == ans)
                res++;
        }
        return res;
    }
};
// @lc code=end
