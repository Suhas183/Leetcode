class Solution {
public:
    
    void helper(vector<int> v, int n, int ind, vector<int> temp, vector<vector<int>> &res)
    {
        res.push_back(temp);
        
        for(int i = ind; i < n; i++)
        {
            if(i != ind && v[i] == v[i - 1])
            {
                continue;
            }
            
            temp.push_back(v[i]);
            helper(v,n,i+1,temp,res);
            temp.pop_back();

        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        helper(nums,n,0,temp,res);
        return res;
    }
};
