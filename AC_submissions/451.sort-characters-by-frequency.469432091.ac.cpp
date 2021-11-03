/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:
    
    vector<pair<char, int>> vec;
    static bool cmp(const pair<char, int> &p1, const pair<char, int> &p2){
        return p1.second > p2.second;
    }
    unordered_map<char, int> table;
    string frequencySort(string s) {
        for(auto ch : s)
            table[ch]++;
        for(auto it : table)
            vec.push_back(it);
        sort(vec.begin(), vec.end(), cmp);
        string ans;
        for(auto p : vec)
            for(auto i = 0; i < p.second; i++)
                ans += p.first;
        return ans;
    }
};
// @lc code=end
