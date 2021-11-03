/*
 * @lc app=leetcode id=1640 lang=cpp
 *
 * [1640] Check Array Formation Through Concatenation
 */

// @lc code=start
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<bool> used(pieces.size(), false);
        int i = 0;
        while(i < arr.size()){
            bool find = false;
            for(int j = 0; j < pieces.size(); j++){
                if(used[j]) continue;
                if(arr[i] == pieces[j].front()){
                    used[j] = true;
                    find = true;
                    for(int k = 0; k < pieces[j].size(); k++){
                        if(arr[i++] != pieces[j][k])
                            return false;
                    }
                }
            }
            if(!find) return false;
        }
        return true;
    }
};
// @lc code=end
