/*
 * @lc app=leetcode id=1361 lang=cpp
 *
 * [1361] Validate Binary Tree Nodes
 */

// @lc code=start
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        bool parent[n] = {};
        for(int i = 0; i < leftChild.size(); i++)
        {
            if(leftChild[i] < 0)
                continue;
            if(parent[leftChild[i]])
                return false;
            parent[leftChild[i]] = true;
        }
        for(int i = 0; i < rightChild.size(); i++)
        {
            if(rightChild[i] < 0)
                continue;
            if(parent[rightChild[i]])
                return false;
            parent[rightChild[i]] = true;
        }
        int root = -1;
        for(int i = 0; i < n; i++)
        {
            if(!parent[i])
            {
                if(root == -1)
                    root = i;
                else return false;
            }
        }
        if(root == -1)
            return false;
        bool visit[n] = {};
        int now;
        stack<int>st;
        st.push(root);
        while(!st.empty()) //DFS
        {
            now = st.top();
            st.pop();
            if(visit[now])
                return false;
            visit[now] = true;
            if(leftChild[now] != -1)
                st.push(leftChild[now]);
            if(rightChild[now] != -1)
                st.push(rightChild[now]);
        }
        for(int i = 0; i < n; i++)
            if(!visit[i])
                return false;
        return true;
    }
};
// @lc code=end
