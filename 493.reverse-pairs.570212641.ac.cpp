/*
 * @lc app=leetcode id=493 lang=cpp
 *
 * [493] Reverse Pairs
 */

// @lc code=start
class BIT{
public:
    vector<int>tree;
    int lowbit(int x){
        return x & (-x);
    }
    int sum(int i){
        int res = 0;
        while(i > 0){
            res += tree[i];
            i -= lowbit(i);
        }
        return res;
    }
    void update(int i, int val){
        while(i < tree.size()){
            tree[i] += val;
            i += lowbit(i);
        }
    }
};
class Solution {
public:
    unordered_map<int, int> mp;
    int reversePairs(vector<int>& nums) {
        unordered_map<long long, long long>mp;
        vector<long long>vec(2*nums.size());
        for(int i = 0; i < nums.size(); i++){
            vec[i] = nums[i];
            vec[i+nums.size()] = 2LL * nums[i];
        }
        sort(vec.begin(), vec.end());
        int rank = 1;
        for(auto x : vec) mp[x] = rank++;
        BIT bit;
        bit.tree = vector<int>(vec.size()+1);
        int res = 0;
        for(auto i = 0; i < nums.size(); i++){
            res += i - bit.sum(mp[2LL*nums[i]]);
            bit.update(mp[nums[i]], 1);
        }
        return res;
    }
};
// @lc code=end
