/*
 * @lc app=leetcode id=705 lang=cpp
 *
 * [705] Design HashSet
 */

// @lc code=start
class MyHashSet {
public:
    /** Initialize your data structure here. */
    unordered_set<int> table;
    MyHashSet() {
        table.clear();
    }
    
    void add(int key) {
        table.insert(key);
    }
    
    void remove(int key) {
        table.erase(key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return table.count(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// @lc code=end
