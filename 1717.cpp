class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score=0;
        if(x>y){
            while(s.find("ab")!=string::npos){
                score+=x;
                s.erase(s.find("ab"),2);
            }
            while(s.find("ba")!=string::npos){
                score+=y;
                s.erase(s.find("ba"),2);
            }

        }else{
            while(s.find("ba")!=string::npos){
                score+=y;
                s.erase(s.find("ba"),2);
            }
             while(s.find("ab")!=string::npos){
                score+=x;
                s.erase(s.find("ab"),2);
            }

        }return score;
    }
};
