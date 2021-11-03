/*
 * @lc app=leetcode id=1409 lang=cpp
 *
 * [1409] Queries on a Permutation With Key
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
    void update(int i, int v){
        while(i < tree.size()){
            tree[i] += v;
            i += lowbit(i);
        }
    }
};
class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>res;
        res.reserve(queries.size());
        BIT bit;
        bit.tree.assign(2*m + 2, 0);
        vector<int>pos(m+1);
        for(int i = 1; i <= m; i++){
            pos[i] = m + i;
            bit.update(i+m, 1);
        }
        for(auto q : queries){
            res.push_back(bit.sum(pos[q]-1));
            bit.update(pos[q], -1);
            pos[q] = m;
            bit.update(m, 1);
            --m;
        }
        return res;
    }
        
};
// @lc code=end
