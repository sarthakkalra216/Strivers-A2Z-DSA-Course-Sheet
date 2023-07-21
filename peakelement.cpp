class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=1;
        int high=nums.size()-2;
        int mid;
        int n=nums.size();
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        while(low<=high)
        {   mid=(low+high)/2;
            if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1])
            return mid;
            else if(nums[mid]<nums[mid+1])low=mid+1;
            else high =mid-1;
        }
        return -1;
    }
};
