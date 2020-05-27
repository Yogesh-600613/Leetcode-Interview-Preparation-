#include<bits/stdc++.h>
using namespace std;


// Method-1 Brute Force

/*
Method-2 find a valley then find peak take difference and add to total profit
Single pass but complex code
*/




// Method-3 
// add consecutive profits - Same approach but simpler code
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() <=1)
            return 0;
        
        int ans =0;
        for(int i = 0 ; i < prices.size()-1 ; i++ )
            if(prices[i+1]>prices[i])
                ans+= prices[i+1] - prices[i];
        
        
        return ans;
    }
};