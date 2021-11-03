/*
 * @lc app=leetcode id=855 lang=cpp
 *
 * [855] Exam Room
 */

// @lc code=start
class ExamRoom {
public:
    int N;
    int ctr = 0;
    set<int> sit;
    ExamRoom(int n) {
        N = n;
    }
    
    int seat() {
        if(!ctr){
            sit.insert(0);
            ctr = 1;
            return 0;
        }
        int index = -1;
        int maxi = INT_MIN;
        if(*sit.begin() > maxi){
            index = 0;
            maxi = *sit.begin();
        }
        for(auto it = sit.begin(); ; it++){
            const int L = *it;
            auto iter = it;
            ++iter;
            if(iter == sit.end()) break;
            const int R = *iter;
            const int M = L + (R - L) / 2;
            if(min(M - L, R - M) > maxi){
                index = M;
                maxi = min(M - L, R - M);
            }
        }
        if(N - 1 - *sit.rbegin() > maxi){
            index = N - 1;
            maxi = N - 1 - *sit.rbegin();
        }
        ++ctr;
        sit.insert(index);
        return index;
    }
    
    void leave(int p) {
        // if(sit.find(p) == sit.end()){
        //     cout << "Not found error on " << p << '\n';
        //     return;
        // }
        --ctr;
        sit.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */
// @lc code=end
