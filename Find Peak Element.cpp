class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        if(n == 1)
        {
            return 0;
        }
        
        int s = 0;
        int e = n - 1;
        
        while(s <= e)
        {
            int mid = s + (e - s)/2;
            
            if(mid > 0 and mid < (n-1))
            {
                if(arr[mid] > arr[mid - 1] and arr[mid] > arr[mid+1])
                {
                    return mid;
                }
                
                else if(arr[mid-1] > arr[mid])
                {
                    e = mid - 1;
                }
                
                else
                {
                    s = mid + 1;
                }
            }
            
            else if(mid == 0)
            {
                if(arr[0] > arr[1])
                {
                    return 0;
                }
                
                else
                {
                    return 1;
                }
            }
            
            else{
                
                if(arr[n-1] > arr[n-2])
                {
                    return n-1;
                }
                
                else
                {
                    return n-2;
                }
            }
        }
        
        return -1;
    }
};
