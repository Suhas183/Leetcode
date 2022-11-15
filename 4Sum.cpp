class Solution {
public:
    #define ll long long 
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < n-3; i++)
        {
            if(i == 0 or nums[i] != nums[i-1])
            {
            for(int j = i + 1; j < n - 2; j++)
            {
                if(j == i + 1 || nums[j] != nums[j-1])
                {
                int s = j + 1;
                int e = n - 1;
                long long int temp = (ll)target - (ll)nums[i] - (ll)nums[j];
                    
                while(s < e)
                {
                    if(nums[s] + nums[e] == temp)
                    {
                        res.push_back({nums[i],nums[j],nums[s],nums[e]});
                        while(s < e and nums[s] == nums[s+1]) s++;
                        while(s < e and nums[e] == nums[e-1]) e--;
                        
                        s++;
                        e--;
                    }
                    
                    else if(nums[s] + nums[e] < temp)
                    {
                        s++;
                    }
                    
                    else
                    {
                        e--;
                    }
                }
            }
                
            }
            }
        }
        
        return res;
        
    }
};
