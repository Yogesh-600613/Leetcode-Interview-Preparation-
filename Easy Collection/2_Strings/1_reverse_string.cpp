class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int n = s.size();
        for(int g=0;g<(n+1)/2;g++)
        {
            swap(s[g],s[n-1-g]);
        }
    }
};