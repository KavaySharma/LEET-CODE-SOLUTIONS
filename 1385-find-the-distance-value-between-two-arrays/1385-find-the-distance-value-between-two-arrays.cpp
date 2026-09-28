class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int count = 0;
        for(int i = 0; i<n;i++){
            bool IsTrue = true;
            for(int j = 0; j<m;j++){
                int ans = arr1[i]-arr2[j];
                if(abs(ans)<=d){
                    IsTrue = false;
                    break;
                }
            }
            if(IsTrue){count++;}
        }
        return count;
    }
};