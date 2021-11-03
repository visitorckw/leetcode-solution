/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> table;
    Node* dfs(Node* node){
        if(!node) return NULL;
        if(table.count(node)) return table[node];
        Node* N = new Node(node->val);
        table[node] = N;
        for(auto child : node->neighbors){
            Node* tmp = dfs(child);
            if(tmp) N->neighbors.push_back(tmp);
        }
        return N;
    }
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }
};
// @lc code=end
