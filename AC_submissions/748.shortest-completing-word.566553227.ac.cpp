/*
 * @lc app=leetcode id=748 lang=cpp
 *
 * [748] Shortest Completing Word
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string res(1100, '\0');
        unordered_map<char, int>license;
        unordered_map<char, int>ctr;
        for(auto ch : licensePlate)
            if(isalpha(ch)) license[tolower(ch)]++;
        for(auto str : words){
            if(str.size() >= res.size()) continue;
            ctr.clear();
            for(auto ch : str) 
                if(isalpha(ch)) ctr[tolower(ch)]++;
            bool flag = true;
            for(auto it = license.begin(); it != license.end(); it++){
                if(it->second > ctr[it->first]){
                    flag = false;
                    break;
                }
            }
            if(flag) res = str;
        }
        return res;
    }
};
// @lc code=end
