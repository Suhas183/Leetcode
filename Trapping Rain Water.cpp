class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        int leftmax = 0;
        int rightmax = 0;
        int res = 0;
        
        while(s <= e)
        {
            if(arr[s] <= arr[e])
            {
                if(arr[s] >= leftmax)
                {
                    leftmax = arr[s];
                }
                
                else
                {
                    res += (leftmax - arr[s]);
                }
                
                s++;
            }
            
            else
            {
                if(arr[e] >= rightmax)
                {
                    rightmax = arr[e];
                }
                
                else
                {
                    res += (rightmax - arr[e]);
                }
                
                e--;
            }
            
        }
        return res;
    }
};
