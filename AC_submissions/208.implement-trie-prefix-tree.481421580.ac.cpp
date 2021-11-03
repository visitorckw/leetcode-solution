/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
struct node{
    node* child[26] = {};
    bool leaf = false;
};
class Trie {
public:
    /** Initialize your data structure here. */
    node* root;
    Trie() {
        root = new node;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        node* n = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(n->child[ch-'a']){
                n = n->child[ch-'a'];
            }
            else{
                n->child[ch-'a'] = new node;
                n = n->child[ch-'a'];
            }
        }
        n->leaf = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        node* n = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(n->child[ch-'a']){
                n = n->child[ch-'a'];
            }
            else{
                return false;
            }
        }
        return n and n->leaf;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        node* n = root;
        for(int i = 0; i < prefix.size(); i++){
            char ch = prefix[i];
            if(n->child[ch-'a']){
                n = n->child[ch-'a'];
            }
            else{
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end
