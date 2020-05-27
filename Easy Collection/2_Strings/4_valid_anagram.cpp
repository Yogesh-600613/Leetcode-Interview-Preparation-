// Method-1 sort both strings and check if s1 == s2

// Method-2 use hash map
class Solution {
public:                                     
    bool isAnagram(string s, string t)
    {
        map<char,int> mps,mpt;
        
        if(s.length()  != t.length())
            return false;
        
        
        for(char c:s)
            mps[c]++;
        
        for(char c:t)
            mpt[c]++;
        
        for(char c:s)
        {
            if(mps[c] != mpt[c])
                return false;
        }
        
        for(char c:t)
        {
            if(mps[c] != mpt[c])
                return false;
        }
        
        return true;
    }
};