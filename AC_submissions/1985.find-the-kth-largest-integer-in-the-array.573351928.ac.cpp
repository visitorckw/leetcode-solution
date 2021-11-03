/*
 * @lc app=leetcode id=1985 lang=cpp
 *
 * [1985] Find the Kth Largest Integer in the Array
 */

// @lc code=start
static bool cmp(const string&str1, const string& str2){
    if(str1.size() != str2.size())
        return str1.size() > str2.size();
    return str1 > str2;
}
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), cmp);
        return nums[k-1];
    }
};
// @lc code=end
