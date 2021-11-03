/*
 * @lc app=leetcode id=1603 lang=cpp
 *
 * [1603] Design Parking System
 */

// @lc code=start
class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        arr[0] = big;
        arr[1] = medium;
        arr[2] = small;
    }
    
    bool addCar(int carType) {
        if(arr[carType-1]){
            --arr[carType-1];
            return true;
        }
        return false;
    }
private:
    int arr[3];
    
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
// @lc code=end
