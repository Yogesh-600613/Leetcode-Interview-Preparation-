class Solution {
public:
    vector<int> original,aux;
    
    Solution(vector<int>& nums) 
    {
        original = nums;
        aux = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        next_permutation(aux.begin(),aux.end());
        return aux;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */