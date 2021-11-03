/*
 * @lc app=leetcode id=1451 lang=cpp
 *
 * [1451] Rearrange Words in a Sentence
 */

// @lc code=start
bool cmp(string a,string b){
    /*if(a.size() == b.size())
        return true;*/
    return a.size() < b.size();
}

class Solution {
public:
    vector<string>vec;
    string arrangeWords(string text) {
        string s;
        for(int i = 0 ; i < text.size(); i++){
            if('a' <= tolower(text[i]) && tolower(text[i]) <= 'z')
                s.push_back(tolower(text[i]));
            else{
                vec.push_back(s);
                s.clear();
            }
        }
        if(!s.empty())
            vec.push_back(s);
        
        stable_sort(vec.begin(),vec.end(),cmp);
        
        string ans;
        if(vec.empty()) return "";
        vec[0][0] = toupper(vec[0][0]);
        for(auto str : vec){
            ans += (str + " ");
        }
        ans.pop_back();
        return ans;
    }
};
// @lc code=end
