/*
 * @lc app=leetcode id=692 lang=cpp
 *
 * [692] Top K Frequent Words
 */

// @lc code=start
class Solution {
public:
    static bool cmp(pair<string,int> &p1, pair<string,int> &p2){
        if(p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second > p2.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>table;
        for(auto w : words){
            table[w]++;
        }
        vector<pair<string, int>> vec;
        for(auto it : table){
            vec.push_back(it);
        }
        sort(vec.begin(), vec.end(),cmp);
        vector<string> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
// @lc code=end
