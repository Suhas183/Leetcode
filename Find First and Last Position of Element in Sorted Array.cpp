class Solution {
public:
    int binary_search(vector<int> nums, int target, int n, int s, int e)
    {
        while(s <= e)
        {
            int mid = s + (e-s)/2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            
            else if(nums[mid] > target)
            {
                e = mid - 1;
            }
            
            else
            {
                s = mid + 1;
            }
        }
        
        return -1;
    }
    
    int firstOccurence(vector<int> nums, int target)
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int index = -1;
        
        while(binary_search(nums,target,n,s,e) != -1)
        {
            index = binary_search(nums,target,n,s,e);
            e = index - 1;
        }
        
        return index;
    }
    
     int lastOccurence(vector<int> nums, int target)
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int index = -1;
        
        while(binary_search(nums,target,n,s,e) != -1)
        {
            index = binary_search(nums,target,n,s,e);
            s = index + 1;
        }
        
        return index;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurence(nums,target);
        if(first == -1)
        {
            return {-1,-1};
        }
        
        else
        {
            return {first,lastOccurence(nums,target)};
        }
    }
};
