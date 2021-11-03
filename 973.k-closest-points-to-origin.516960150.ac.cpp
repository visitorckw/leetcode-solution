/*
 * @lc app=leetcode id=973 lang=cpp
 *
 * [973] K Closest Points to Origin
 */

// @lc code=start
struct cmp{
    bool operator()(const vector<int>&pointA, const vector<int>& pointB){
        return pointA[0] * pointA[0] + pointA[1] * pointA[1] < pointB[0] * pointB[0] + pointB[1] * pointB[1];
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // sort(points.begin(), points.end(), cmp);
        // return vector<vector<int>>(points.begin(), points.begin() + k);
        priority_queue<vector<int>, vector<vector<int>>, cmp> heap;
        for(auto p : points){
            heap.push(p);
            if(heap.size() > k)
                heap.pop();
        }
        vector<vector<int>>ans;
        while(!heap.empty()){
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};
// @lc code=end
