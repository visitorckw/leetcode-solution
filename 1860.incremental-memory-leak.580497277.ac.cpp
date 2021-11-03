/*
 * @lc app=leetcode id=1860 lang=cpp
 *
 * [1860] Incremental Memory Leak
 */

// @lc code=start
class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        vector<int>res(3);
        int t;
        for(t = 1; ; t++){
            if(memory1 >= memory2){
                memory1 -= t;
                if(memory1 < 0) break;
            }
            else{
                memory2 -= t;
                if(memory2 < 0) break;
            }
            res[1] = memory1;
            res[2] = memory2;
        }
        res[0] = t;
        return res;
    }
};
// @lc code=end
