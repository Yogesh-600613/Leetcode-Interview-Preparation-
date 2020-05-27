class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        long sum =0;
        int maxy = INT_MIN;
        for(int i : nums)
        {
            if(i>maxy)
                maxy = i;
            sum += i;
        }
        if(maxy < nums.size() )
            return nums.size();
        
        long sumy = maxy * (maxy+1) /2;
        
        return int(sumy - sum);
        
        /*  Other O(n) solution using xor
        
            int ans = nums.size();
            for(int i=0;i<n;i++)
                ans = ans ^ i ^ nums[i];
                
            return ans;
        
        */
        
    }
};