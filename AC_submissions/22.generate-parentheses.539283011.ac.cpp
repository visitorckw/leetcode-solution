/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    void f(int left, int right, int n, string &str){
        if(left == n and right == n) {
            res.push_back(str);
            return;
        }
        if(left == right){
            str += '(';
            left++;
            f(left, right, n, str);
            str.pop_back();
            left--;
        }
        else if(left < n){
            str += '(';
            left++;
            f(left, right, n, str);
            str.pop_back();
            left--;
            str += ')';
            right++;
            f(left, right, n, str);
            str.pop_back();
            right--;
        }
        else{
            str += ')';
            right++;
            f(left, right, n, str);
            str.pop_back();
            right--;
        }
    }
    vector<string> generateParenthesis(int n) {
        string str;
        f(0, 0, n, str);
        return res;
    }
};
// @lc code=end
