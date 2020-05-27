class Solution {
public:
    string encoding(string s)
    {
        char s1=s[0]; int freq=1; string ans; int i;
        for(i=1;i<s.length();i++)
        {
            if(s[i]!=s1){
                 ans+=to_string(freq);
                ans+=s1;
                s1=s[i];
                freq=0;
            }
            freq++;
        }
        ans+=to_string(freq);
        ans+=s1; 
        return ans;
    }
    string countAndSay(int n) {
        string f="1";
            while(--n)
                f= encoding(f);            
        return f;
    }
};