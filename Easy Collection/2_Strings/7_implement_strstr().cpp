class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        
        string s1 = haystack;
        string s2 = needle;
        int n1 = s1.length();
        int n2 = s2.length();
        
        
        if(  (n1 == 0 && n2 == 0) ||  n2 == 0  )
            return 0;
        
        
        if(n1<n2)
            return -1;
        
        int i=0;
        int slow = 0;

        // cout<<"n1 is "<<n1<<" "<<"  n2 is "<<n2<<endl;
        
        
        if(s1 == s2)
            return 0;
        
        
        for(int i=0;i<=n1-n2;i++)
        {
            int j;
            for(j=0;j<n2;j++)
                if(s1[i+j] != s2[j])
                    break;
            if(j==n2)
                return i;
        }
        return -1;
        
    }
};