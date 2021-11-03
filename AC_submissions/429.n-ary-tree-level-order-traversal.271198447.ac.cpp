/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>>ans;
    void dfs(Node *node,const int level)
    {
        if(!node) return;
        if(level == ans.size()) ans.push_back(vector<int>{node->val});
        else ans[level].push_back(node->val);
        for(auto p : node->children) dfs(p,level+1);
    }
    vector<vector<int>> levelOrder(Node* root) {
        dfs(root,0);
        return ans;
    }
};
// @lc code=end
