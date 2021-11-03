/*
 * @lc app=leetcode id=211 lang=cpp
 *
 * [211] Design Add and Search Words Data Structure
 */

// @lc code=start
struct node{
    node* child[26];
    bool leaf;
    node(){
        leaf = false;
        // memset(child, NULL, sizeof(node*) * 26);
        for(int i = 0; i < 26; i++)
            child[i] = NULL;
    }
};
class WordDictionary {
public:
    node* root;
    WordDictionary() {
        root = new node;
    }
    
    void addWord(string word) {
        node* cur = root;
        for(auto ch : word){
            if(!cur->child[ch-'a']) cur->child[ch-'a'] = new node;
            cur = cur->child[ch-'a'];
        }
        cur->leaf = true;
    }
    bool dfs(const string& word, int depth, node* cur){
        if(depth >= word.size()){
            return cur->leaf;
        }
        if(word[depth] == '.'){
            for(int i = 0; i < 26; i++)
                if(cur->child[i] && dfs(word, depth+1, cur->child[i]))
                    return true;
            return false;
        }
        if(cur->child[word[depth] - 'a'])
            return dfs(word, depth+1, cur->child[word[depth] - 'a']);
        return false;
    }
    
    bool search(string word) {
        return dfs(word, 0, root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end
