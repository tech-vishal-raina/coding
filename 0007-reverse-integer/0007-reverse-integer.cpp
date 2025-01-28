class Solution {
public:
    int reverse(int x) {
        long long reversee =0;
        while(x!=0){
             reversee =(reversee * 10) + (x%10);
            x = x/10;
        }
        if(-2147483648 <= reversee && reversee <= 2147483647)
        return reversee;
        else return 0;
    }
};