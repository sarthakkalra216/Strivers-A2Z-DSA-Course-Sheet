class Solution {
public:
int isPossible(vector<int> nums,int k,int sum)
{
    int cnt=1;
    int temp=0;

    for(int i=0;i<nums.size();i++)
    {
        if(temp+nums[i]<=sum)
        {
            temp+=nums[i];

        }
        else{
            temp=nums[i];
            cnt++;
        }
    }
    return cnt;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2; 
            if(isPossible(nums,k,mid)<=k)
            {
                high=mid-1;

            }
            else
            low=mid+1;

        }
        return low;
    }
};
