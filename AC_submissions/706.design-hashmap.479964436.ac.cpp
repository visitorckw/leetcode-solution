/*
 * @lc app=leetcode id=706 lang=cpp
 *
 * [706] Design HashMap
 */

// @lc code=start
class MyHashMap {
public:
    /** Initialize your data structure here. */
    unordered_map<int,int> table;
    MyHashMap() {
        table.clear();
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        table[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        if(table.find(key) == table.end())
            return -1;
        return table[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        auto it = table.find(key);
        if(it != table.end())
            table.erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
// @lc code=end
