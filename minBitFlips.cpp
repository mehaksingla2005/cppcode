class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        while(start>0 || goal>0){
            if((start&1)!=(goal&1))count++;
            start>>=1;
            goal>>=1;
        }
        return count;
    }
};

//Recursive Approach
class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start==0 && goal==0)return 0;
        int flip=(start&1)!=(goal&1);
        return flip+minBitFlips(start>>1,goal>>1);
    }
};

//Using xor
class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR to find differing bits
        int xorResult = start ^ goal;
        int count = 0;
        // Count the number of 1s in xorResult (differing bits)
        while (xorResult) {
            count += xorResult & 1;  // Increment if the last bit is 1
            xorResult >>= 1;         // Shift right to process the next bit
        }
        return count;
    }
};




//Brian Kernighans algorithm
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult=start^goal;
        int count=0;
        while(xorResult){
            xorResult&=(xorResult-1);
            count++;
        }
        return count;
    }
};
