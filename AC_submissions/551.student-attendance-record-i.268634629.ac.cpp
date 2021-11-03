/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, l;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') {
                a++;
                if(a > 1) return false;
            }
            else if(s[i] == 'L')
            {
                l = 1;
                i++;
                for(; i <s.size(); i++)
                {
                    if(s[i] == 'L')
                    {
                        l++;
                        if(l > 2) return false;
                    }
                    else 
                    {
                        i--;
                        break;
                    }
                }
            }
        }
        return true;
    }
};
// @lc code=end
