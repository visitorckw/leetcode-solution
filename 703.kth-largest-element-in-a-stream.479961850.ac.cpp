/*
 * @lc app=leetcode id=703 lang=cpp
 *
 * [703] Kth Largest Element in a Stream
 */

// @lc code=start
class KthLargest {
public:
    priority_queue<int,vector<int>, greater<int>> heap;
    int K;
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for(auto x : nums){
            heap.push(x);
            if(heap.size() > K)
                heap.pop();
        }
    }
    
    int add(int val) {
        heap.push(val);
        if(heap.size() > K)
            heap.pop();
        return heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end
