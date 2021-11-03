/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */

// @lc code=start
class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int, vector<int>, less<int>> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        // if(min_heap.empty() and max_heap.empty()){
        //     max_heap.push(num);
        //     return;
        // }
        if(min_heap.size() == max_heap.size())
            max_heap.push(num);
        else if(max_heap.size() > min_heap.size())
            min_heap.push(num);
        while(!max_heap.empty() and !min_heap.empty() and max_heap.top() > min_heap.top()){
            int x = max_heap.top();
            int y = min_heap.top();
            max_heap.pop();
            min_heap.pop();
            max_heap.push(y);
            min_heap.push(x);
        }
    }
    
    double findMedian() {
        // cout << "max heap size: " << max_heap.size() << '\n';
        // cout << "min heap size: " << min_heap.size() << '\n';
        // cout << "max heap top: " << max_heap.top() << '\n';
        // cout << "min heap top: " << min_heap.top() << '\n';
        // cout << '\n';
        if(max_heap.size() > min_heap.size()) return max_heap.top();
        return (max_heap.top() + min_heap.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end
