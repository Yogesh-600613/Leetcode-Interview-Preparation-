class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> dp(n,0);
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
            
        dp[0] = nums[0];
        dp[1] = nums[1];
        
        
        // for(int i=2 ; i<n ; i++)
        //     dp[i] = max(dp[i-1],dp[i-2] + nums[i]);
        
        for(int i=2;i<nums.size();i++)
        {
            for(int j=i-2;j>=0;j--)
            {
                dp[i]=max(dp[i],nums[i]+dp[j]);
            }
        }
        
        int maxy = INT_MIN;
        for(int i=0;i<dp.size();i++)
            if(dp[i]>maxy)
                maxy = dp[i];
        
        return maxy;
    }
};