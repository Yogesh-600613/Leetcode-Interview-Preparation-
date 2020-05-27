class Solution {
public:
    int myAtoi(string str) 
    {
        int i=0;
        int neg = 0;
        int n = str.length();
        
        
        while( i<n &&   str[i] == ' ' )
            i++;
        if(str[i] == '-')
        {
            neg = 1;
            i++;
        }
        else if(str[i] == '+')
            i++;
        
        
        
        char check = str[i];
        if( ! ( str[i] >= '0'  && str[i] <= '9')  )
            return 0;
        
        
        double ans =0;
        
        while(i < n  && str[i] != ' ' &&   ( str[i] >= '0'  && str[i] <= '9')   )
        {
            ans = ans*10 + (str[i]-'0') ;
            i++;
        }
        
        
        if(neg)
            ans *= (-1);
        
        if(ans< INT_MIN)
            return INT_MIN;
        else if(ans>INT_MAX)
            return INT_MAX;
        
        int new_ans = ans;
        
        return new_ans;
    }
};