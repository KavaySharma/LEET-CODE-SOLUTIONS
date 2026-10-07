class Solution {
public:
    int mirrorDistance(int n) {
        int o = n;
        int digit = 0;
        while(n!=0){
            digit = digit * 10 + n%10;
            n /= 10;
        }
        return abs(o-digit);
    }
};