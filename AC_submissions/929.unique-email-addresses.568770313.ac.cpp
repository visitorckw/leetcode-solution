/*
 * @lc app=leetcode id=929 lang=cpp
 *
 * [929] Unique Email Addresses
 */

// @lc code=start
class Solution {
public:
    unordered_map<string, int> table;
    int numUniqueEmails(vector<string>& emails) {
        for(auto str : emails){
            string local, domain;
            bool front = true;
            bool ignore = false;
            for(auto ch : str){
                if(ch == '@'){
                    front = false;
                    continue;
                }
                if(front){
                    if(ch == '.') continue;
                    if(ch == '+'){
                        ignore = true;
                        continue;
                    }
                    if(ignore) continue;
                    local += ch;
                }
                else{
                    domain += ch;
                }
            }
            const string email = local + "@" + domain;
            table[email]++;
        }
        return table.size();
    }
};
// @lc code=end
