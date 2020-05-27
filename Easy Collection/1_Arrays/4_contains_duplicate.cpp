#include<bits/stdc++.h>
using namespace std;



//Method-1 Brute Force

/*
Method-2 
sort and then check if consecutive terms are equal or not
O(nLogn)
*/

/*
Method-3
traverse and put in set. if repeats, return false
O(n) + O(n)space
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]) == s.end())
            {
                s.insert(nums[i]);
            }
            else
                return true;
        }
        return false;
    }
};