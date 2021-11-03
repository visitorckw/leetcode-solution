/*
 * @lc app=leetcode id=953 lang=cpp
 *
 * [953] Verifying an Alien Dictionary
 */

// @lc code=start
int table[26];
static bool cmp(const string& str1, const string& str2){
    const int size = min(str1.size(), str2.size());
    for(int i = 0; i < size; i++){
        if(str1[i] != str2[i])
            return table[str1[i]-'a'] < table[str2[i]-'a'];
    }
    return str1.size() <= str2.size();
}
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < 26; i++) table[order[i]-'a'] = i;
        for(int i = 1; i < words.size(); i++)
            if(!cmp(words[i-1], words[i])) return false;
        return true;
    }
};
// @lc code=end
