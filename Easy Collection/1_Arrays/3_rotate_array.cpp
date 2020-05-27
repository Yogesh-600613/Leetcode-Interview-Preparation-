#include<bits/stdc++.h>
using namespace std;

// Method-1 Brute Force O(n*k)
// Method-2 Using extra array O(n) + O(n)space
/*
Method-3 Cyclic Approach
In this we put the element at it's final place,store the next element in temp and again follow same procedure 
O(n) Single pass
*/




/*
Method-4 Reverse Algorithm
reverse full list
reverse first k numbers
reverse rest of the numbers
we can use inbuilt reverse function of vector.O(n) 3 pass
below implementation does the same in a different observable way. O(n) 2 pass
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n= nums.size();
        if(k%n == 0)
            return;
        k = k%n;
        
        int arr[n];
        int j=0;
        
        for(int i = n-k; i<n;i++)
            arr[j++] = nums[i];
        
        for(int g=0;g<n-k;g++)
            arr[j++] = nums[g];
        
        for(int r=0;r<n;r++)
            nums[r] = arr[r];
    }
};