/*
 * @lc app=leetcode id=1471 lang=cpp
 *
 * [1471] The k Strongest Values in an Array
 */

// @lc code=start
int med;
class Solution {
public:
    static bool cmp(const int &x, const int &y){
        if(abs(x-med) == abs(y-med)) return x > y;
        return abs(x-med) > abs(y-med);
    }
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int> copy(arr.begin(), arr.end());
        sort(copy.begin(), copy.end());
        med = copy[(arr.size() - 1) >> 1];
        sort(arr.begin(), arr.end(), cmp);
        vector<int> ans(arr.begin(), arr.begin() + k);
        return ans;
    }
};
// @lc code=end
