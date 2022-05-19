class Solution {
public:
    
    void helper(vector<int> &v, int i, int target, vector<int> temp, vector<vector<int>> &res)
    {
        if(target == 0)
        {
            res.push_back(temp);
            return;
        }
        
        if(i == v.size())
        {
            return;
        }
        
        
        if(v[i] <= target)
        {
            temp.push_back(v[i]);
            helper(v,i,target - v[i], temp, res);
            temp.pop_back();
        }
        
        helper(v,i + 1, target, temp ,res);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        helper(candidates,0,target,temp,res);
        return res;
    }
};
