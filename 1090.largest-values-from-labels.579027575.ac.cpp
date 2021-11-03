/*
 * @lc app=leetcode id=1090 lang=cpp
 *
 * [1090] Largest Values From Labels
 */

// @lc code=start
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>vec(values.size());
        int res = 0;
        for(int i = 0; i < values.size(); i++){
            vec[i] = make_pair(values[i], labels[i]);
        }
        sort(vec.begin(), vec.end(), greater<pair<int,int>>());
        for(int i = 0; i < vec.size(); i++){
            if(numWanted <= 0) break;
            if(mp[vec[i].second] >= useLimit) continue;
            mp[vec[i].second]++;
            res += vec[i].first;
            numWanted--;
        }
        return res;
    }
};
// @lc code=end
