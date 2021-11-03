/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string S) {
        for(int i = 0; i < S.size() - 1; i++)
        {
            if(S.size() <= 1) return S;
            if(S[i] == S[i+1]) 
            {
                S.erase(S.begin()+i,S.begin()+i+2);
                i -= 2;
                if(i < -1) i = -1;
            }
            
        }
        return S;
    }
};
// @lc code=end
