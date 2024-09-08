class Solution {
private:
    string inttobinary(int num){
        if(num==0)return "0";
        string ans="";
        while(num>0){
            ans=(num%2==0?"0":"1")+ans;
            num=num/2;
        }
        return ans;
    }
public:
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        string yearbinary=inttobinary(year);
        string monthbinary=inttobinary(month);
        string datebinary=inttobinary(day);
        
        return yearbinary+'-'+monthbinary+'-'+datebinary;
     
    }
};
