class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int temp = nums[i];
            int count = 1;
            for(int j = i+1; j<n; j++){
                if(nums[j] == temp){
                    count++;
                }
            }
            if(count > n / 2){
            return temp;
            }                               
        }
        return 0 ;
    }
};