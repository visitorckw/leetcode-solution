/*
 * @lc app=leetcode id=811 lang=cpp
 *
 * [811] Subdomain Visit Count
 */

// @lc code=start
class Solution {
public:
    unordered_map<string,int>table;
    vector<string> ans;
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        for(auto str : cpdomains){
            int num = atoi(str.c_str());
            int start, a, b;
            for(int i = 0; i < str.size(); i++)
                if('a' <= str[i] and str[i] <= 'z'){
                    start = i;
                    break;
                }
            a = str.find(".", start + 1);
            b = str.find(".", a + 1);
            table[str.substr(start, str.size() - start + 1)] += num;
            if(a != string::npos) table[str.substr(a + 1, str.size() - a)] += num;
            if(b != string::npos) table[str.substr(b + 1, str.size() - b)] += num;
        }
        for(auto it : table){
            ans.push_back(to_string(it.second) + " " + it.first);
        }
        return ans;
    }
};
// @lc code=end
