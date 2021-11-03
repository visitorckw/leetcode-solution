/*
 * @lc app=leetcode id=824 lang=cpp
 *
 * [824] Goat Latin
 */

// @lc code=start
class Solution {
public:
    bool isVowel(char ch){
        ch = toupper(ch);
        return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U';
    }
    string toGoatLatin(string sentence) {
        vector<string> vec;
        string str, res;
        for(auto ch : sentence){
            if(ch == ' '){
                vec.push_back(str);
                str.clear();
            }
            else str += ch;
        }
        if(!str.empty()) vec.push_back(str);
        
        for(int i = 0; i < vec.size(); i++){
            if(!isVowel(vec[i][0])){
                char tmp = vec[i][0];
                vec[i].erase(vec[i].begin());
                vec[i].push_back(tmp);
            }
            vec[i] += "ma";
            for(int j = 0; j < i + 1; j++)
                vec[i] += "a";
            res += vec[i] + " ";
        }
        res.pop_back();
        return res;
    }
};
// @lc code=end
