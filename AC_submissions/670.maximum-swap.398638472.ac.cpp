/*
 * @lc app=leetcode id=670 lang=cpp
 *
 * [670] Maximum Swap
 */

// @lc code=start
class Solution {
public:
    int toint(vector<int>&vec){
        int ans = 0;
        for(int i = 0; i < vec.size(); ++i){
            ans *= 10;
            ans += vec[i];
        }
        return ans;
    }
    int maximumSwap(int num) {
        if(!num) return 0;
        vector<int>vec;
        while(num){
            vec.push_back(num % 10);
            num /= 10;
        }
        reverse(vec.begin(),vec.end());
        vector<int>max(vec.size(),INT_MIN);
        for(int i = vec.size() - 2; i >= 0; --i){
            max[i] = (max[i+1] > vec[i+1] ? max[i+1] : vec[i+1]);
        }
        int change = -1;
        for(int i = 0; i < vec.size() - 1; ++i){
            if(vec[i] < max[i]){
                change = i;
                break;
            }
        }
        if(change == -1)
            return toint(vec);
        for(int i = vec.size() - 1; i >= 0; --i){
            if(vec[i] == max[change]){
                swap(vec[i],vec[change]);
                break;
            }
        }
        return toint(vec);
    }
};
// @lc code=end
