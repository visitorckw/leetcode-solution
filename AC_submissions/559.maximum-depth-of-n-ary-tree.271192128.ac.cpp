/*
 * @lc app=leetcode id=559 lang=cpp
 *
 * [559] Maximum Depth of N-ary Tree
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
    int max = 0;
    void dfs(Node *node,int level)
    {
        if(!node) return;
        if(level > max) max = level;
        for(auto p : node->children) dfs(p,level+1);
    }
    int maxDepth(Node* root) {
        dfs(root,1);
        return max;
    }
};
// @lc code=end
