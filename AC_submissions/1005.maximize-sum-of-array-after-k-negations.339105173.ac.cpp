/*
 * @lc app=leetcode id=1005 lang=cpp
 *
 * [1005] Maximize Sum Of Array After K Negations
 */

// @lc code=start

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        priority_queue<int,vector<int>,greater<int>>heap;
        for(auto n : A)
            heap.push(n);
        int temp;
        for(int i = 0; i < K; ++i){
            temp = heap.top();
            heap.pop();
            heap.push(-temp);
        }
        int sum = 0;
        while(!heap.empty()){
            sum += heap.top();
            heap.pop();
        }
        return sum;
    }
};
// @lc code=end
