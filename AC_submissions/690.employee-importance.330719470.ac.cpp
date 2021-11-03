/*
 * @lc app=leetcode id=690 lang=cpp
 *
 * [690] Employee Importance
 */

// @lc code=start
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int ans = 0;
    int getImportance(vector<Employee*> employees, int id) {
        stack<int>st;
        st.push(id);
        while(!st.empty()) {
            for(auto e :employees) {
                if(e->id == st.top()) {
                    st.pop();
                    ans += e->importance;
                    for(auto c : e->subordinates)
                        st.push(c);
                    break;
                }
                
            }
        }
        return ans;
    }
};
// @lc code=end
