class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        if(num==0) return "0";
        if(num<0){
            ans += '-';
            num = abs(num);
        }
        string rev;
        while(num>0){

            rev += char('0' + num % 7);
            num /= 7;
        }
        reverse(rev.begin(),rev.end());
        return ans + rev;
    }
};