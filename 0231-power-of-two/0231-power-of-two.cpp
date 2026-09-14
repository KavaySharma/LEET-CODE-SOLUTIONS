class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        if(n <= 0){
            return false;
        }
        while(n!=1){
            if(n % 2 == 0){
               n = n>>1; 
            }else if(n%2 != 0){
                return false;
            }
        }
        return true;
    }
};