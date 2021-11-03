/*
 * @lc app=leetcode id=315 lang=cpp
 *
 * [315] Count of Smaller Numbers After Self
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
    vector<int> countSmaller(vector<int>& nums) {
        unordered_map<int, int> mp;
        unordered_set<int>st;
        vector<int> vec = nums;
        sort(vec.begin(), vec.end());
        int rank = 1;
        for(auto x : vec) {
            if(!st.count(x)) {
                mp[x] = rank++;
                st.insert(x);
            }
        }
        vector<int> res(nums.size());
        BIT bit;
        bit.tree = vector<int>(rank+1, 0);
        // cout << bit.tree.size() << "\n\n\n";
        for(int i = nums.size() - 1; i >= 0; i--){
            cout << i << ' ';
            // cout << mp[nums[i]] << '\n';
            res[i] = bit.sum(mp[nums[i]]-1);
            bit.update(mp[nums[i]], 1);
        }
        return res;
    }
};
// @lc code=end
