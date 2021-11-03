/*
 * @lc app=leetcode id=1381 lang=cpp
 *
 * [1381] Design a Stack With Increment Operation
 */

// @lc code=start
class CustomStack {
public:
    vector<int>vec;
    int maxSize;
    CustomStack(int maxSize) {
        vec.reserve(maxSize);
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(vec.size() < maxSize)
            vec.push_back(x);
    }
    
    int pop() {
        if(vec.empty()) return -1;
        const int res = vec.back();
        vec.pop_back();
        return res;
    }
    
    void increment(int k, int val) {
        const int n = min(k, (int)vec.size());
        for(int i = 0; i < n; i++)
            vec[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
// @lc code=end
