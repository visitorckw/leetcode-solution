/*
 * @lc app=leetcode id=599 lang=cpp
 *
 * [599] Minimum Index Sum of Two Lists
 */

// @lc code=start
class Solution {
public:
    unordered_map<string,int>table;
    int min = INT_MAX;
    vector<string>ans;
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        for(int i = 0; i < list1.size(); i++)
            table[list1[i]] = i;
        for(int i = 0; i < list2.size(); i++)
        {
            if(table.find(list2[i]) != table.end())
            {
                if(i + table[list2[i]] < min)
                {
                    ans.clear();
                    ans.push_back(list2[i]);
                    min = i + table[list2[i]];
                }
                else if(i + table[list2[i]] == min)
                    ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};
// @lc code=end
