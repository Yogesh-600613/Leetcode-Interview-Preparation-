class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry =0;
        int n = digits.size();
        
        digits[n-1] += 1;
        carry = digits[n-1] / 10;
        digits[n-1] = digits[n-1]%10;
        
        
        for(int i = n-2;i>=0;i--)
        {
            if(carry)
            {
                digits[i] += 1;
                carry = digits[i] / 10;
                digits[i] = digits[i]%10;
            }
        }
        if(carry)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};