/*
 * @lc app=leetcode id=1592 lang=cpp
 *
 * [1592] Rearrange Spaces Between Words
 */

// @lc code=start
class Solution {
public:
    string reorderSpaces(string text) {
        int space = 0;
        vector<string> vec;
        string str;
        for(auto ch : text){
            if(ch == ' '){
                space++;
                if(!str.empty()) vec.push_back(str);
                str.clear();
            }
            else str += ch;
        }
        if(!str.empty()) vec.push_back(str);
        if(vec.size() == 1)
            return vec[0] + string(space, ' ');
        const int Q = space / (vec.size() - 1);
        const int R = space % (vec.size() - 1);
        // cout << space << '\n';
        // cout << Q << '\n' << R << '\n';
        string res;
        for(auto s : vec){
            res += s;
            res += string(Q, ' ');
        }
        for(int i = 0; i < Q; i++) res.pop_back();
        res += string(R, ' ');
        return res;
    }
};
// @lc code=end
