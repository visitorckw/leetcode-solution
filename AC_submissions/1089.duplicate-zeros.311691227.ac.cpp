/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp;
        temp.reserve(arr.size()+1);
        for(int i = 0, ctr = 0; ctr < arr.size(); i++, ctr++)
        {
            if(arr[i])
                temp.push_back(arr[i]);
            else
            {
                temp.push_back(arr[i]);
                temp.push_back(arr[i]);
                ctr++;
            }
        }
        while(temp.size() > arr.size())
            temp.pop_back();
        arr = temp;
    }
};
// @lc code=end
