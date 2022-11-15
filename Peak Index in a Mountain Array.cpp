class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        
        while(s <= e)
        {
            int mid = s + (e-s)/2;
            
            if((mid == 0 || arr[mid] > arr[mid-1]) and (mid == n -1  || arr[mid] > arr[mid+1]))
            {
                return mid;
            }
            
            else if(arr[mid+1] > arr[mid] and mid < n-1)
            {
                s = mid + 1;
            }
            
            else
            {
                e = mid - 1;
            }
        }
        
        return -1;
    }
};
