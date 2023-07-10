class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0){
                el=nums[i];
                cnt=1;
            
            }
            else if(el==nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }

        }
        int cnt2=0;
        for(auto it :nums)
        {
            if(it==el)
            {
                cnt2++;
            }
        }
        return el;
    }
};
