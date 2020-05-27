class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int MAXY = nums[0];
        int maxy = nums[0];
        
        
        for(int i = 1;i<nums.size();i++)
        {
            maxy = max(nums[i],maxy+nums[i]);
            MAXY = max(MAXY,maxy);
        }
        
        return MAXY;
    }
};