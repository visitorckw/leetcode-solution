/*
 * @lc app=leetcode id=1455 lang=cpp
 *
 * [1455] Check If a Word Occurs As a Prefix of Any Word in a Sentence
 */

// @lc code=start
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i = 0, j = 0;
        int word = 1;
        bool flag;
        while(i < sentence.size()){
            for(j = i; j < sentence.size(); ++j)
                if(sentence[j] == ' ')
                    break;
            flag = true;
            if(j - i < searchWord.size()){
                flag = false;
                goto label;
            }
            for(int a = i; a < j && a - i < searchWord.size(); ++a){
                if(sentence[a] != searchWord[a-i]){
                    flag = false;
                    break;
                }
            }
        label:
            if(flag)
                return word;
            ++word;
            i = j + 1;
        }
        if(i >= sentence.size())
            return -1;
        return word;
    }
};
// @lc code=end
