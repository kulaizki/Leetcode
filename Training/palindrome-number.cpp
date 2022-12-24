class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        
        int64_t x_copy = x, reverse = 0;  
        while (x_copy) {
            reverse = reverse * 10 + x_copy % 10;
            x_copy /= 10;
        }

        if (reverse == x)
            return true;

        return false;
    }
};
