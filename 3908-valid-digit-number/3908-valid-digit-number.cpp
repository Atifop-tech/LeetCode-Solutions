class Solution {
public:
    bool validDigit(int n, int x) {
        bool found = 0;
        while(n > 9){
            if(x == n%10) found = 1;
            n /= 10;
        }

        return found && n!=x;
    }
};