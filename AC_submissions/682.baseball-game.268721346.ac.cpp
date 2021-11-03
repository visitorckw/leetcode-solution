/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>point;
        int sum = 0,x;
        
        for(int i = 0; i < ops.size(); i++)
        {
            if(ops[i] == "C")
            {
                sum -= point.back();
                point.pop_back();
            }
            else if(ops[i] == "D") 
            {
                x = point.back() * 2;
                sum += x;
                point.push_back(x);
            }
            else if(ops[i] == "+") 
            {
                x = point.back()+point[point.size()-2];
                sum += x;
                point.push_back(x);
            }
            else 
            {
                x = atoi(ops[i].c_str());
                sum += x;
                point.push_back(x);
            }
            //cout << sum <<'\n';
        }
        return sum;
    }
};
// @lc code=end
