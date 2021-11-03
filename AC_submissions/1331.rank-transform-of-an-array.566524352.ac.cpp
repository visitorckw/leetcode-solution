/*
 * @lc app=leetcode id=1331 lang=cpp
 *
 * [1331] Rank Transform of an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return arr;
        vector<pair<int, int>>vec(arr.size()); //pair(val, index)
        for(auto i = 0; i < arr.size(); i++) vec[i] = make_pair(arr[i], i);
        sort(vec.begin(), vec.end());
        int rank = 1;
        arr[vec[0].second] = 1;
        for(int i = 1; i < vec.size(); i++){
            if(vec[i].first == vec[i-1].first)
                arr[vec[i].second] = rank;
            else arr[vec[i].second] = ++rank;
        }
        return arr;
    }
};
// @lc code=end
