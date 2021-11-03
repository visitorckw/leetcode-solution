/*
 * @lc app=leetcode id=1534 lang=cpp
 *
 * [1534] Count Good Triplets
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<int>& arr, int pos, int ctr){
        if(ctr >= 3){
            if(abs(vec[0]-vec[1]) <= a && abs(vec[1]-vec[2]) <= b && abs(vec[0]-vec[2]) <= c)
                res++;
            return;
        }
        if(pos >= arr.size()) return;
        dfs(arr, pos + 1, ctr);
        vec[ctr++] = arr[pos];
        dfs(arr, pos + 1, ctr);
    }
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        vec = vector<int>(3, -1);
        this->a = a;
        this->b = b;
        this->c = c;
        dfs(arr, 0, 0);
        return res;
    }
private:
    int res = 0;
    vector<int>vec;
    int a, b, c;
};
// @lc code=end
