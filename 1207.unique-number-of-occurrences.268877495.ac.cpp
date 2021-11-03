/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
class Solution {
public:
    list<int>num;
    unordered_map<int,int>ctr;
    unordered_map<int,bool>occurence;
    
    bool uniqueOccurrences(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++)
        {
            if(!ctr[arr[i]])
            {
                ctr[arr[i]] = 1;
                num.push_back(arr[i]);
            }
            else ctr[arr[i]]++;
        }
        while(!num.empty())
        {
            if(occurence[ctr[num.back()]]) return false;
            occurence[ctr[num.back()]] = true;
            num.pop_back();
        }
        return true;
        
    }
};
// @lc code=end
