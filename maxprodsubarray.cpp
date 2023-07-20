class Solution {
public:
    long int maxProduct(vector<int>& nums) {
     long long  maxprod=INT_MIN;
     long long prefix=1;
     long long suffix=1;
     int n=nums.size();
     for(int i=0;i<n;i++)
     {
        if(suffix==0)suffix=1;
        if(prefix==0)prefix=1;
        suffix=suffix*nums[n-i-1];
        prefix=prefix*nums[i];
        maxprod=max(maxprod,max(prefix,suffix));
     }
    return maxprod;
    }
};
