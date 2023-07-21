class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
       
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)return mid;
            //left sorted
            else if(nums[start]<=nums[mid])
            {
                if(target>=nums[start]&&target<=nums[mid])
                end=mid-1;
                else start=mid+1;
            }
            //right sorted
            else if(nums[mid]<=nums[end])
            {
                if(target>=nums[mid]&&target<=nums[end])
                start=mid+1;
                else end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
        
    }
};
