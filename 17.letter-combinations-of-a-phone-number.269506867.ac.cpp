/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<char>table[10];
    vector<string>ans;
    string ques;
    
    void backtrack(int n,string s)
    {
        if(n == ques.size()) 
        {
            ans.push_back(s);
            return ;
        }
        for(auto c:table[ques[n]-'0'])
        {
            s.push_back(c);
            backtrack(n+1,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return vector<string>();
        ques = digits;
        int ctr;
        for(int i = 2, j = 0; i <= 9; i++)//建表
        {
            for(ctr = 0; ctr < 3; ctr++, j++)
            {
                table[i].push_back('a'+j);
            }
            if(i == 7) 
            {
                table[7].push_back('s');
                j++;
            }
        }
        table[9].push_back('z');
        backtrack(0,"");
        return ans;
    }
};
// @lc code=end
