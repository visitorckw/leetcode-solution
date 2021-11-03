/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    stack<char>st;
    queue<int>qu;
    
    bool isVowel(const char &c)
    {
        switch(c)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
    }
    string reverseVowels(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                st.push(s[i]);
                qu.push(i);
            }
        }
        while(!st.empty())
        {
            s[qu.front()] = st.top();
            qu.pop();
            st.pop();
        }
        return s;
    }
};
// @lc code=end
