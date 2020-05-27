//Method-1 Brute force
// Method-2 using map
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
        map<int,int> mp;
        int n = nums.size();
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                int it = mp[target-nums[i]];
                v.push_back(it);
                v.push_back(i);
                break;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return v;
    }
};