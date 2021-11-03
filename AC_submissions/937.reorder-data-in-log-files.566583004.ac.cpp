/*
 * @lc app=leetcode id=937 lang=cpp
 *
 * [937] Reorder Data in Log Files
 */

// @lc code=start
static bool cmp(const pair<string,int>& p1, const pair<string,int>& p2){
    const string str1 = p1.first, str2 = p2.first;
    const int index1 = p1.second, index2 = p2.second;
    bool letter1 = 0, letter2 = 0;
    vector<string> word1, word2;
    string str;
    for(auto ch : str1){
        if(ch != ' ') str += ch;
        else if(!str.empty()){
            word1.push_back(str);
            str.clear();
        }
    }
    if(!str.empty()){
        word1.push_back(str);
        str.clear();
    }
    for(auto ch : str2){
        if(ch != ' ') str += ch;
        else if(!str.empty()){
            word2.push_back(str);
            str.clear();
        }
    }
    if(!str.empty()){
        word2.push_back(str);
        str.clear();
    }
    letter1 = isalpha(word1[1][0]);
    letter2 = isalpha(word2[1][0]);
    if(letter1 != letter2) return letter1 > letter2;
    if(!letter1) return index1 < index2;
    for(int i = 1; i < min(word1.size(), word2.size()); i++)
        if(word1[i] != word2[i])
            return word1[i] < word2[i];
    if(word1.size() != word2.size())
        return word1.size() < word2.size();
    return word1[0] < word2[0];
}
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<pair<string,int>> vec(logs.size()); //pair(log, index)
        for(int i = 0; i < logs.size(); i++){
            vec[i].first = logs[i];
            vec[i].second = i;
        }
        stable_sort(vec.begin(), vec.end(), cmp);
        for(int i = 0; i < logs.size(); i++)
            logs[i] = vec[i].first;
        return logs;
    }
};
// @lc code=end
