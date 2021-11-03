/*
 * @lc app=leetcode id=933 lang=cpp
 *
 * [933] Number of Recent Calls
 */

// @lc code=start
class RecentCounter {
public:
    vector<int> vec;
    RecentCounter() {
        vec.reserve(10001);
    }
    
    int ping(int t) {
        vec.push_back(t);
        int ctr = 0;
        for(int i = vec.size() - 1; i >= 0; i--){
            if(vec[i] < t - 3000) return ctr;
            ++ctr;
        }
        return ctr;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
// @lc code=end
