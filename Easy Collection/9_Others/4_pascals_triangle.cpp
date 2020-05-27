class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector <vector <int>>ans;
        if(numRows==0) return ans;
        vector<int>vect;
        vect.push_back(1);
        ans.push_back(vect);
        if(numRows==1)return ans;
        while(numRows>1)
        {
            vector<int>temp;
            temp.push_back(1);
            for(int i = 0 ; i< vect.size()-1;i++)
            {
                temp.push_back(vect[i]+vect[i+1]);
            }
            temp.push_back(1);
            vect=temp;
            ans.push_back(temp);
            temp.clear();
            numRows--;
        }
        return ans;
    }
};