class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int max1=*max_element(seats.begin(),seats.end());
        int max2=*max_element(students.begin(),students.end());
        int maxPosition=max(max1,max2);
        vector<int> differences(maxPosition,0);
        for(int i=0;i<seats.size();i++){
            differences[seats[i]-1]++;
        }
        for(int i=0;i<students.size();i++){
            differences[students[i]-1]--;
        }
        int moves=0;
        int unmatched=0;
        for(int i=0;i<maxPosition;i++){
            moves+=abs(unmatched);
            unmatched+=differences[i];
        }return moves;}
};
