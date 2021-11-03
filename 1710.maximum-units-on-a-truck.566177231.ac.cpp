/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
static bool cmp(const vector<int>&v1, const vector<int>&v2){
    return v1[1] > v2[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        // for(auto v : boxTypes)
        //     cout << v[1] << '\n';
        int res = 0;
        for(auto i = 0; i < boxTypes.size(); i++){
            if(boxTypes[i][0] >= truckSize){
                res += truckSize * boxTypes[i][1];
                break;
            }
            res += boxTypes[i][0] * boxTypes[i][1];
            truckSize -= boxTypes[i][0];
        }
        return res;
    }
};
// @lc code=end
