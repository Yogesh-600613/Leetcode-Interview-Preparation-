#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()==0 || nums.size() == 1)
            return nums.size();
        int j=0;
        
        
        int n = nums.size();
        
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] != nums[i+1])
                nums[j++] = nums[i];
        }
        nums[j] = nums[n-1];
        return j+1;
    }
};