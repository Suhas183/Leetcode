class Solution {
public:
    void helper(vector<int> v, int n, int ind, vector<int> temp, vector<int> map, vector<vector<int>> &res)
    {
        if(ind == n)
        {
            res.push_back(temp);
        }
        
        for(int i = 0; i < n; i++)
        {
            if(map[i] == 0 and i > 0 and v[i] == v[i-1] and map[i-1] == 0)
            {
                continue;
            }
            
            else if(map[i] == 0)
            {
                map[i] = 1;
                temp.push_back(v[i]);
                helper(v,n,ind+1,temp,map,res);
                temp.pop_back();
                map[i] = 0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<int> map(n,0);
        vector<int> temp;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        helper(nums,n,0,temp,map,res);
        return res;
    }
};
