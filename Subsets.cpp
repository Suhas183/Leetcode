class Solution {
public:
    
    void helper(vector<int> v, int i, vector<int> temp, vector<vector<int>> &res,int n)
    {
        if(i == n)
        {
            res.push_back(temp);
            return;
        }
        
        temp.push_back(v[i]);
        helper(v,i+1,temp,res,n);
        
        temp.pop_back();
        helper(v,i+1,temp,res,n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        int n = nums.size();
        
        helper(nums,0,temp,res,n);
        return res;
    }
};
