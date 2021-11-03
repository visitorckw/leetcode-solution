/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3) return false;
        int max = INT_MIN;
        int index = -1;
        for(int i = 1; i < arr.size() - 1; i++){
            if(arr[i] > max){
                max = arr[i];
                index = i;
            }
        }
        for(int i = 0; i < index; i++)
            if(arr[i] >= arr[i+1])
                return false;
        for(int i = index; i < arr.size() - 1; i++)
            if(arr[i] <= arr[i+1])
                return false;
        return true;
    }
};
// @lc code=end
