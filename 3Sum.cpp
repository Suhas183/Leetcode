class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        for(int i = 0; i < n - 2; i++)
        {
            if(i == 0 or arr[i] != arr[i-1])
            {
            int s = i+1;
            int e = n-1;
            int target = (arr[i])*(-1);
            
            while(s < e)
            {
                if(arr[s] + arr[e] == target)
                {
                    res.push_back({arr[i],arr[s],arr[e]});
                    while(s < e and arr[s] == arr[s+1])
                    {
                        s++;
                    }
                    
                    while(s < e and arr[e] == arr[e-1])
                    {
                        e--;
                    }
                    
                    s++;
                    e--;
                }
                
                else if(arr[s] + arr[e] < target)
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
        
        return res;
        
    }
};
