/*
 * @lc app=leetcode id=1395 lang=cpp
 *
 * [1395] Count Number of Teams
 */

// @lc code=start
class BIT{
public:
    vector<int>tree;
    int n;
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
        while(i <= n){
            tree[i] += val;
            i += lowbit(i);
        }
    }
    void reset(){
        for(auto &x : tree) x = 0;
    }
};
class Solution {
public:
    unordered_map<int, int>mp;
    int numTeams(vector<int>& rating) {
        vector<int> vec = rating;
        sort(vec.begin(), vec.end());
        int rank = 1;
        for(auto x : vec) mp[x] = rank++;
        BIT bit;
        bit.n = rating.size() + 1;
        bit.tree = vector<int>(bit.n + 1, 0);
        vector<int>preLow(rating.size()), postLow(rating.size());
        vector<int>preUp(rating.size()), postUp(rating.size());
        int res = 0;
        for(int i = 0; i < rating.size(); i++){
            int lower = bit.sum(mp[rating[i]]);
            preLow[i] = lower;
            preUp[i] = i - lower;
            bit.update(mp[rating[i]], 1);
        }
        bit.reset();
        for(int i = rating.size() - 1; i >= 0; i--){
            int lower = bit.sum(mp[rating[i]]);
            postLow[i] = lower;
            postUp[i] = rating.size() - 1 - i - lower;
            bit.update(mp[rating[i]], 1);
        }
        for(int i = 0; i < rating.size(); i++){
            res += preLow[i] * postUp[i] + preUp[i] * postLow[i];
        }
        return res;
    }
};
// @lc code=end
