class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int o = 0;
        int highest = 0; 

        for (int i = 0; i < gain.size(); i++) {
           o += gain[i];
            highest =max(highest,o);
        }
        return highest;
    }
};
