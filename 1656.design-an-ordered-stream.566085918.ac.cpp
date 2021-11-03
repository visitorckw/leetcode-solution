/*
 * @lc app=leetcode id=1656 lang=cpp
 *
 * [1656] Design an Ordered Stream
 */

// @lc code=start
class OrderedStream {
public:
    OrderedStream(int n) {
        table = vector<string>(n + 1, "");
        this->N = n;
        this->ptr = 1;
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string>res;
        table[idKey] = value;
        while(ptr <= N && table[ptr] != "")
            res.push_back(table[ptr++]);
        return res;
    }
private:
    int ptr;
    int N;
    vector<string> table;
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
// @lc code=end
