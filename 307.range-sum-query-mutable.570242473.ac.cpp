/*
 * @lc app=leetcode id=307 lang=cpp
 *
 * [307] Range Sum Query - Mutable
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
class NumArray {
public:
    vector<int> num;
    BIT bit;
    NumArray(vector<int>& nums) {
        num = nums;
        bit.tree = vector<int>(nums.size()+1, 0);
        for(int i = 0; i < nums.size(); i++){
            bit.update(i+1, nums[i]);
        }
    }
    
    void update(int index, int val) {
        bit.update(index+1, val - num[index]);
        num[index] = val;
    }
    
    int sumRange(int left, int right) {
        return bit.sum(right+1) - bit.sum(left);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
// @lc code=end
