/*
 * @lc app=leetcode id=2043 lang=cpp
 *
 * [2043] Simple Bank System
 */

// @lc code=start
class Bank {
public:
    Bank(vector<long long>& balance) {
        this->balance = balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        account1--;
        account2--;
        if(account1 >= balance.size() || account2 >= balance.size())
            return false;
        if(money > balance[account1])
            return false;
        balance[account1] -= money;
        balance[account2] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        account--;
        if(account >= balance.size())
            return false;
        balance[account] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        account--;
        if(account >= balance.size())
            return false;
        if(money > balance[account])
            return false;
        balance[account] -= money;
        return true;
    }
private:
    vector<long long> balance;
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
// @lc code=end
