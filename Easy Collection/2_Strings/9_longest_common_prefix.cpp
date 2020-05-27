

bool comp(string s1, string s2)
{
    if(s1.length() != s2.length())
        return s1.length() < s2.length();
    
    return s1<s2;
}



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        int flag = 0;
        string ans = "";
        
        if(strs.size() == 0)
            return ans;
        
        sort(strs.begin(),strs.end());
        int n = strs[0].length();
        int i=0;
        while( !flag  && i <= n  ) 
        {
            for(int j=0 ; j < strs.size()-1 ; j++)
            {
                if(strs[j][i] != strs[j+1][i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
            ans += strs[0][i];
            i++;
        }
        
        return ans;
    }
};