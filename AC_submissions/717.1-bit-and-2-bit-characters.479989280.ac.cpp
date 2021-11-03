/*
 * @lc app=leetcode id=717 lang=cpp
 *
 * [717] 1-bit and 2-bit Characters
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bits.pop_back();
        int p = 0;
        while(true){
            if(p >= bits.size())
                break;
            if(!bits[p]){
                p++;
                continue;
            }
            if(p == bits.size() - 1)
                return false;
            p += 2;
        }
        return true;
    }
};
// @lc code=end
