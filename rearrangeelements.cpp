class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();

        vector<int> ans(n,0);

        int even=0;
        int odd=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[even]=nums[i];
                if(even+2<n)
                even=even+2;
            }
            else
            {
                ans[odd]=nums[i];
                if(odd+2<n)odd=odd+2;
            }
        }
        return ans;

    }
};
