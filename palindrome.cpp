class Solution {
public:
    bool isPalindrome(int x) {
        // Special cases:
        // When x is negative or when the last digit of x is 0 but x is not 0.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int rev = 0;
        while (x > rev) {
            int n = x % 10;
            rev = rev * 10 + n;
            x = x / 10;
        }

        // When the length is odd, we can get rid of the middle digit by rev / 10
        // For example when the input is 12321, at the end of the while loop we get x = 12, rev = 123,
        // since the middle digit doesn't matter in palindromes (it will always equal to itself), we can simply get rid of it.
        return rev == x || rev / 10 == x;
    }
};
