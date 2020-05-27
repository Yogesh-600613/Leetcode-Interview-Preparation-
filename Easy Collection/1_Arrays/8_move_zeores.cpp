#include<bits/stdc++.h>
using namespace std;

/*
Method-1 count number of 0's
put all non zero elements at first than put all 0's at back (no. of zeroes to be put = count)
uses extra space
performs more operations
*/

/*
Method-2
maintain last_non_zero_found_at index and keep putting non zero numbers
then after that index, put 0's
Space optimal
Still performs unnecessary operations(Ex- 0,0,0,0,1)
*/

/*
Method-3
to avoid putting all zeroers after last_non_zero_found_at index, rather do swapping
space and operation optimal
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i=0;
        int n = nums.size();
        
        for(int g=0;g<n;g++)                    // i = last zero found at
        {
            if(nums[g] != 0)
                swap(nums[i++],nums[g]);
        }
    }
};