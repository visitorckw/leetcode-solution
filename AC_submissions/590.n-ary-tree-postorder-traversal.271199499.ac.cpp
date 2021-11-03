/*
 * @lc app=leetcode id=590 lang=cpp
 *
 * [590] N-ary Tree Postorder Traversal
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
    vector<int>ans;
    void dfs(Node *node)
    {
        if(!node) return;
        for(auto p : node->children) dfs(p);
        ans.push_back(node->val);
    }
    vector<int> postorder(Node* root) {
        dfs(root);
        return ans;
    }
};
// @lc code=end
