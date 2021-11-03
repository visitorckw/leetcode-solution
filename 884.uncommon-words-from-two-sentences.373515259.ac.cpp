/*
 * @lc app=leetcode id=884 lang=cpp
 *
 * [884] Uncommon Words from Two Sentences
 */

// @lc code=start
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string,int> table;
        vector<string> ans;
        int L = 0, R = 0;
        while(L < A.size() && R < A.size()){
            while(A[L] == ' ') ++L;
            for(R = L; R < A.size(); ++R)
                if(A[R] == ' ') break;
            table[A.substr(L,R-L)]++;
            L = R + 1;
        }
        L = R = 0;
        while(L < B.size() && R < B.size()){
            while(B[L] == ' ') ++L;
            for(R = L; R < B.size(); ++R)
                if(B[R] == ' ') break;
            table[B.substr(L,R-L)]++;
            L = R + 1;
        }
        
        for(auto it = table.begin(); it != table.end(); it++){
            if((*it).second == 1)
                ans.push_back((*it).first);
        }
        
        return ans;
    }
};
// @lc code=end
