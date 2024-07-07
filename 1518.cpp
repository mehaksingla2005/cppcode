class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxbottles=numBottles;
        int bottles;
        while(numBottles/numExchange!=0){
        bottles=numBottles/numExchange;
        numBottles=numBottles%numExchange;
        maxbottles+=bottles;
        numBottles+=bottles;
        }
        return maxbottles;
        
    }
};
