class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>result;
        int m = 0;
        for(int i = 0; i<n; i++){
            m = max(m,candies[i]);
        }
        for(int i = 0; i<n; i++){
            if(extraCandies + candies[i]>=m){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};