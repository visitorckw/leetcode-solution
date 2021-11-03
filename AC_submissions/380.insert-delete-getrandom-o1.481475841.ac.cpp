/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> myset;
    unordered_map<int,int> table; //key: val value: index of val in myset
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(table.find(val) != table.end())
            return false;
        myset.push_back(val);
        table[val] = myset.size() - 1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(table.find(val) == table.end())
            return false;
        const int index = table[val];
        table[myset.back()] = index;
        swap(myset[index], myset[myset.size() - 1]);
        myset.pop_back();
        table.erase(table.find(val));
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int rnd = rand() % myset.size();
        return myset[rnd];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end
