/*
 * @lc app=leetcode id=925 lang=cpp
 *
 * [925] Long Pressed Name
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        vector<pair<char,int>> target, vec;
        char prev = name[0];
        int ctr = 1;
        for(int i = 1; i < name.size(); i++){
            if(name[i] != prev){
                target.push_back(make_pair(prev, ctr));
                prev = name[i];
                ctr = 1;
            }
            else ++ctr;
        }
        target.push_back(make_pair(prev, ctr));
        
        prev = typed[0];
        ctr = 1;
        for(int i = 1; i < typed.size(); i++){
            if(typed[i] != prev){
                vec.push_back(make_pair(prev, ctr));
                prev = typed[i];
                ctr = 1;
            }
            else ++ctr;
        }
        vec.push_back(make_pair(prev, ctr));
        if(target.size() != vec.size()) return false;
        for(int i = 0; i < target.size(); i++)
            if(vec[i].first != target[i].first || vec[i].second < target[i].second)
                return false;
        return true;
    }
};
// @lc code=end
