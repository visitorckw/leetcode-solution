/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(!n) return true;
        if(flowerbed.size() == 1)
            return (flowerbed[0] && !n) || (!flowerbed[0] && n <= 1);
        if(!flowerbed[0] && !flowerbed[1]){
            n--;
            flowerbed[0] = 1;
        }
        const int size = flowerbed.size();
        if(!flowerbed[size-1] && !flowerbed[size-2]){
            n--;
            flowerbed[size-1] = 1;
        }
        if(n <= 0) return true;
        for(int i = 1; i < size - 1; i++){
            if(flowerbed[i]) continue;
            if(!flowerbed[i-1] && !flowerbed[i+1]){
                flowerbed[i] = 1;
                if(--n <= 0) return true;
            }
        }
        return false;
    }
};
// @lc code=end
