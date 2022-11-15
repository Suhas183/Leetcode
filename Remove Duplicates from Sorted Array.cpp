class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        
        for(int i = 1; i < n; i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[index++] = nums[i-1];
            }
        }
        nums[index++] = nums[n-1];
        return index;
    }
};
