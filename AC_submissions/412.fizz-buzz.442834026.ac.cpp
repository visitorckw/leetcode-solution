/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        bool t, f;
        for(int i = 1; i <= n; i++){
            t = !(i % 3);
            f = !(i % 5);
            if(t && f) res[i-1] = "FizzBuzz";
            else if(t) res[i-1] = "Fizz";
            else if(f) res[i-1] = "Buzz";
            else res[i-1] = to_string(i);
        }
        return res;
    }
};
// @lc code=end
