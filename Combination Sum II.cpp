class Solution {
public:
    void helper(vector<int> v, int ind, int target, vector<int> temp, vector<vector<int>> &res)
    {
        if(target == 0)
        {
            res.push_back(temp);
            return;
        }
        
        
        for(int i = ind; i < v.size(); i++)
        {
            if(i > ind and v[i] == v[i - 1])
            {
                continue;
            }
            
            if(v[i] > target)
            {
                break;
            }
            
            temp.push_back(v[i]);
            helper(v,i + 1,target- v[i],temp,res);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> res;
        
        helper(candidates,0,target,temp,res);
        return res;
    }
};
