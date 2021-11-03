/*
 * @lc app=leetcode id=1566 lang=cpp
 *
 * [1566] Detect Pattern of Length M Repeated K or More Times
 */

// @lc code=start
class Solution {
public:
    bool f(vector<int>&arr, int x, int y, int m){
        for(int i = 0; i < m; i++){
            if(arr[x+i] != arr[y+i]) return false;
        }
        return true;
    }
    bool containsPattern(vector<int>& arr, int m, int k) {
        for(int i = 0; i + m <= arr.size(); i++){
            int ctr = 1;
            for(int j = i + m; j + m <= arr.size(); j+=m){
                if(f(arr, i, j, m)) ++ctr;
                else break;
            }
            if(ctr >= k) return true;
        }
        return false;
    }
};
// @lc code=end
