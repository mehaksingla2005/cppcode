 #include <string>
using namespace std;

class Solution {
private:
    string solve(int n) {
        string ones[20] = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
        string tens[10] = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
        string ans = "";
        if (n < 20) {
            return ones[n];
        } 
        if(n<100){
            return (tens[n / 10] + ones[n % 10]);
        }
        if(n<1000){
            return solve(n/100)+"Hundred "+solve(n%100);
        }
        if(n<1000000){
            return solve(n/1000)+"Thousand "+solve(n%1000);
        }
        if(n<1000000000){
            return solve(n/1000000)+"Million "+solve(n%1000000);
        }
        return solve(n/1000000000)+"Billion "+solve(n%1000000000);

    }

public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";

        string result;
        result=solve(num);

        // Remove any trailing space
        if (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        return result;
    }
};
