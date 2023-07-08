class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n= nums.size();
        if(n==1||n==0)
        return n;
        int j=1;
        while(j<n)
        {
            if(nums[j]==nums[i])
            j++;
            else
            {
            i++;
            swap(nums[i],nums[j]);
            j++;
            }
        }
        return i+1;
    }
};
