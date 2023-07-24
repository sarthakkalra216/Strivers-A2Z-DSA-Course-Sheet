class Solution {
public:
    long long calculatesum(vector<int>& nums, int mid)
    {
        long long temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp+=ceil((double)nums[i]/(double)mid);
        }
        return temp;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=-1;
        for(int i=0;i<nums.size();i++)
        {
            end=max(end,nums[i]);
        }
        int mid;
       ;
        while(start<=end)
        {
            mid=(start+end)/2;
            long long temp=calculatesum(nums,mid);
            if(temp>threshold)
            {
               start=mid+1;
            
            }
            else
            {
                
                end=mid-1;
            }
        }
        return start;
    }
};
