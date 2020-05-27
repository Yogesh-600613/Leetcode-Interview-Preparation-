#include<bits/stdc++.h>
using namespace std;


 string removespace(string s)
    {
        int i=0;
        string news = "";
        
     
        int n = s.length();
     
        for(int g=0;g<n;g++)    // try to use s[g] - '0'>=0 && <=9
            if( 
                s[g] != ' '&&
                
                (
                    (s[g] >= 'a'  && s[g] <= 'z')    ||
                    (s[g] >= 'A'  &&  s[g]<='Z')  ||
                    (      s[g] == '0' || s[g] == '1' || s[g] == '2' || s[g] == '3' || s[g] == '4' || s[g] == '5' || s[g] == '6' || s[g] == '7' || s[g] == '8' || s[g] == '9') 
                )    
            )
            {
                if(s[g] >= 'A' && s[g] <= 'Z')
                    news += tolower(s[g]);
                else
                    news += s[g];
            }
        return news;
    }




class Solution {
public:
    
    
    bool isPalindrome(string s) 
    {
        if(s.length() == 0 or s.length() == 1)
             return true;
        s = removespace(s);
        // cout<<s<<endl;

        for(int f=0;f<(s.length()+1)/2 ; f++)
        {
            // cout<<f<<"        "<<s[f]<<"    "<<s[s.length()-1 -f]<<endl;

            if(s[f] != s[s.length()-1 -f])
            {
                return false;
            }
        }
        
        return true;
    }
};