/*
 * @lc app=leetcode id=1356 lang=cpp
 *
 * [1356] Sort Integers by The Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>vec;//pair.first:number of 1's pair.second: val
        for(auto n : arr) {
            int temp = n;
            int ctr = 0;
            while(temp){
                if(temp & 1) ++ctr;
                temp >>= 1;
            }
            vec.push_back(make_pair(ctr,n));
        }
        sort(vec.begin(),vec.end());
        for(int i = 0; i < arr.size(); i++)
            arr[i] = vec[i].second;
        return arr;
    }
};

// @lc code=end
