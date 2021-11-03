/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */

// @lc code=start
class Solution {
public:
    unordered_set<int>prime;
    void init(){
        prime.insert(2);
        prime.insert(3);
        prime.insert(5);
        prime.insert(7);
        prime.insert(11);
        prime.insert(13);
        prime.insert(17);
        prime.insert(19);
    }
    int countPrimeSetBits(int L, int R) {
        init();
        int ans = 0;
        for(int i = L; i <= R; i++){
            int temp = i;
            int ctr = 0;
            while(temp){
                if(temp & 1) ++ctr;
                temp >>= 1;
            }
            if(prime.count(ctr)) ++ans;
        }
        return ans;
    }
};
// @lc code=end
