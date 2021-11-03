/*
 * @lc app=leetcode id=589 lang=cpp
 *
 * [589] N-ary Tree Preorder Traversal
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
    vector<int> preorder(Node* root) {
        Node *node;
        stack<Node*>st;
        st.push(root);
        while(!st.empty())
        {
            node = st.top();
            st.pop();
            if(!node) continue;
            ans.push_back(node->val);
            for(int i = node->children.size() - 1; i >= 0; i--)
            {
                st.push(node->children[i]);
            }
        }
        return ans;
    }
};
// @lc code=end
