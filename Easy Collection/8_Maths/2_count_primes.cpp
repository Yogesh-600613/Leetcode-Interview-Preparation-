class Solution {
public:
    int countPrimes(int n) 
    {
        vector<bool> v(n,true);
        for(int i=2 ; i <n ; i++)
        {
            if(v[i])
            {
                int j=i+i;
                while(j<n)
                {
                    v[j] = false;
                    j+=i;
                }
            }
        }
        
        int count =0;
        for(int t=2;t<n;t++)
            if(v[t])
                count++;
        
        return count;
        
    }
};