/*
 * @lc app=leetcode id=327 lang=cpp
 *
 * [327] Count of Range Sum
 */

// @lc code=start
#define ll long long
class BIT{
public:
    vector<ll>tree;
    int lowbit(int x){
        return x & (-x);
    }
    ll sum(int i){
        ll res = 0;
        while(i > 0){
            res += tree[i];
            i -= lowbit(i);
        }
        return res;
    }
    void update(int i, int v){
        while(i < tree.size()){
            tree[i] += v;
            i += lowbit(i);
        }
    }
};
class Solution {
public:
    map<ll, ll> mp;
    set<ll>st;
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        vector<ll>prefix(nums.size()+1, 0);
        // prefix[0] = nums[0];
        for(int i = 0; i < nums.size(); i++)
            prefix[i+1] = prefix[i] + 1LL * nums[i];
        vector<ll>vec;
        vec.reserve(prefix.size() * 3);
        for(auto i = 0; i < prefix.size(); i++){
            if(!st.count(prefix[i])){
                vec.push_back(prefix[i]);
                st.insert(prefix[i]);
            }
            if(!st.count(prefix[i]+lower)){
                vec.push_back(prefix[i]+lower);
                st.insert(prefix[i]+lower);
            }
            if(!st.count(prefix[i]+upper)){
                vec.push_back(prefix[i]+upper);
                st.insert(prefix[i]+upper);
            }
        }
        sort(vec.begin(), vec.end());
        int rank = 1;
        for(auto x : vec){
            mp[x] = rank++;
        }
        BIT bit;
        bit.tree.assign(vec.size()+1, 0);
        // cout << bit.tree.size() << "\n";
        int res = 0;
        for(int i = prefix.size() - 1; i >= 0; i--){
            // cout << i << ' ';
            int L = mp[prefix[i]+lower];
            int R = mp[prefix[i]+upper];
            
            res += bit.sum(R) - bit.sum(L-1);
            
            bit.update(mp[prefix[i]], 1);
        }
        return res;
    }
};
// @lc code=end
