/*
 * @lc app=leetcode id=1668 lang=cpp
 *
 * [1668] Maximum Repeating Substring
 */

// @lc code=start
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int pos = -1;
        int k = 0;
        while(true){
            pos = sequence.find(word, ++pos);
            if(pos == string::npos) break;
            int ctr = 0;
            for(int i = pos; i < sequence.size(); i+=word.size()){
                bool flag = true;
                for(int j = 0; j < word.size(); j++){
                    if(sequence[i+j] != word[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag) ctr++;
                else break;
            }
            k = max(k, ctr);
        }
        return k;
    }
};
// @lc code=end
