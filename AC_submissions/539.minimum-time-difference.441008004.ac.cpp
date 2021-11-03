/*
 * @lc app=leetcode id=539 lang=cpp
 *
 * [539] Minimum Time Difference
 */

// @lc code=start
class Solution {
public:
    int f(const string &s){
        int a,b,c,d;
        a = s[0] - '0';
        b = s[1] - '0';
        c = s[3] - '0';
        d = s[4] - '0';
        return 60 * (a * 10 + b) + c * 10 + d;
    }
    int findMinDifference(vector<string>& timePoints) {
        int res = INT_MAX;
        vector<int> vec;
        for(auto s : timePoints)
            vec.push_back(f(s));
        sort(vec.begin(), vec.end());
        for(int i = 0; i < vec.size() - 1; i++){
            res = min(res, abs(vec[i] - vec[i+1]));
            res = min(res, 24 * 60 - abs(vec[i] - vec[i+1]));
        }
        res = min(res, abs(vec[0] - vec[vec.size()-1]));
        res = min(res, 24 * 60 - abs(vec[0] - vec[vec.size()-1]));
        return res;
    }
};
// @lc code=end
