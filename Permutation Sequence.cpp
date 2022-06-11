class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> res;
        int fact = 1;
        for(int i = 1; i < n; i++)
        {
            res.push_back(i);
            fact = fact*i;
        }
        res.push_back(n);
        string ans = "";
        k = k - 1;
        
        while(true)
        {
            ans = ans + to_string(res[k/fact]);
            res.erase(res.begin() + k/fact);
            
            if(res.size() == 0)
            {
                break;
            }
            
            k = k % fact;
            fact = fact / (res.size());
        }
        
        return ans;
    }
};
