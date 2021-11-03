/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */

// @lc code=start
static bool cmp(const string&a, const string &b){
    return a + b > b + a;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>vec;
        vec.reserve(nums.size());
        for(auto x : nums) vec.push_back(to_string(x));
        sort(vec.begin(), vec.end(), cmp);
        string res;
        for(auto x : vec) res += x;
        if(res.front() == '0') return "0";
        return res;
    }
};
// @lc code=end
