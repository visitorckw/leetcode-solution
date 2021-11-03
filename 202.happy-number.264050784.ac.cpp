/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,bool> table;
    bool isHappy(int n) {
        if(n==1) return true;
        if(table[n]) return false;
        table[n]=true;
        int cnt=0;
        vector<int>vec;
        while(n)
        {
            vec.push_back(n%10);
            n/=10;
        }
        for(int i=0;i<vec.size();i++) cnt+=vec[i]*vec[i];
        return isHappy(cnt);
    }
};
// @lc code=end
