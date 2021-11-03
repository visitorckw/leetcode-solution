/*
 * @lc app=leetcode id=449 lang=cpp
 *
 * [449] Serialize and Deserialize BST
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            if(!node) res += "NULL,";
            else{
                res += to_string(node->val) + ",";
                st.push(node->right);
                st.push(node->left);
            }
        }
        res.pop_back();
        reverse(res.begin(), res.end());
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* dfs(string &data){
        string str;
        for(int i = data.size() - 1; i >= 0; i--){
            if(data[i] == ',') break;
            str += data[i];
        }
        while(!data.empty() and data.back() != ',') data.pop_back();
        if(!data.empty()) data.pop_back();
        if(str == "NULL") return NULL;
        TreeNode* node = new TreeNode(stoi(str));
        if(!data.empty()){
            node->left = dfs(data);
            node->right = dfs(data);
        }
        return node;
    }
    TreeNode* deserialize(string data) {
        return dfs(data);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
// @lc code=end
