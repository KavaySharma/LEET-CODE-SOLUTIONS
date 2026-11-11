class Solution {
public:
    bool isSameAfterReversals(int num) {
        int o = num;
        int rev1 = 0;
        while (o > 0) {
            int dig = o % 10;
            rev1 = rev1 * 10 + dig;
            o = o / 10;
        }
        int rev2 = 0;
        while (rev1 > 0) {
            int dig = rev1% 10;
            rev2 = rev2 * 10 + dig;
            rev1 = rev1 / 10;
        }
        return num==rev2;
    }
};