/*
 * @lc app=leetcode id=677 lang=cpp
 *
 * [677] Map Sum Pairs
 */

// @lc code=start
class MapSum {
public:
    unordered_map<string, int>mp, mp2;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        int delta = 0;
        if(mp2.count(key)) delta = mp2[key];
        mp2[key] = val;
        string str;
        for(auto ch : key){
            str += ch;
            mp[str] += val - delta;
        }
    }
    
    int sum(string prefix) {
        return mp[prefix];
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
// @lc code=end
