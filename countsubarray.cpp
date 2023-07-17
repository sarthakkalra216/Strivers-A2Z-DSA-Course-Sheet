class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> sums;
        sums.insert(make_pair(0,1));
        int sum=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sums.find(sum-k)!=sums.end())
            {
                count+=sums[sum-k];
                
            }
            sums[sum]++;

        }
        return count;

    }
};
