class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i;
        
        int maxsum=nums[0];
        int currentsum=nums[0];
        int n=nums.size();
        for(i=1;i<n;i++){
            currentsum=max(nums[i],currentsum+nums[i]);
                 maxsum=max(currentsum,maxsum);
        }
        
   
            return maxsum;
        

    }
};