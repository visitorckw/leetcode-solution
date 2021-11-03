/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    void clear(queue<int> &q){
        while(!q.empty())
            q.pop();
    }
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int t;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        t = q1.front();
        q1.pop();
        q1 = q2;
        clear(q2);
        return t;
    }
    
    /** Get the top element. */
    int top() {
        int t;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        t = q1.front();
        q2.push(q1.front());
        q1 = q2;
        clear(q2);
        return t;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
