class Solution {
public:
    int reverse(int x) 
    {
        int ans = 0;
        vector<int> v;
        while(x!=0)
        {
            int temp = x%10;
            v.push_back(temp);
            x = x/10;
        }


        /* instead of checking for overflow on every iteration,
            simply use double for ans and at the end check if 
            ans> INT_MAX or ans <INT_MIN
        */


        for(int g=0;g<v.size();g++)
        {
            cout<<ans<<endl;
            
            if (ans > INT_MAX/10 || (ans == INT_MAX / 10 && v[g] > 7))
                return 0;
            if (ans < INT_MIN/10 || (ans == INT_MIN / 10 && v[g] < -8))
                return 0;
            
            ans = ans*10 + v[g];
        }
        return ans;
    }
};