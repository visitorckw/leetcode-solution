/*
 * @lc app=leetcode id=1317 lang=cpp
 *
 * [1317] Convert Integer to the Sum of Two No-Zero Integers
 */

// @lc code=start
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res(2);
        for(int i = 1; i < n; i++){
            if(to_string(i).find('0')==string::npos && to_string(n-i).find('0')==string::npos){
                res[0] = i;
                res[1] = n - i;
                break;
            }
        }
        return res;

    }
};
// @lc code=end
