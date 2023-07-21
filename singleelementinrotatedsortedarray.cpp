class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid;

       
        while(start<=end)
        {
            if(nums.size()==1)return nums[0];
            if(nums[0]!=nums[1])return nums[0];
            if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1];
            mid=(start+end)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])
            return nums[mid];
            else if(nums[mid]==nums[mid-1])
            {
                if((mid-1)%2==0)
                {
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else if(nums[mid]==nums[mid+1])
            {
                if((mid)%2==0)
                {
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;

    }
};
