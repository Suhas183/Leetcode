class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            vector<int> v;
    int n = nums.size();
    k = k % n;
 
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           v.push_back(nums[n + i - k]);
       }
       else
       {
           v.push_back(nums[i - k]);
       }
    }
    
        nums = v;
    }
};
