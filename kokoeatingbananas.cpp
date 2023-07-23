class Solution {
public:
    long long func(vector<int> piles,int mid)
    {
        long long temp=0;
        for(int i=0;i<piles.size();i++)
        {
            temp+=ceil((double)piles[i]/(double)mid);
        }
        return temp;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int  maxi=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            maxi=max(maxi,piles[i]);
        }
        int start=1;
        int ans;
        int end=maxi;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            long long totalhours=func(piles,mid);
            if(totalhours<=h)
            {
                ans=mid;
                end=mid-1;
            }else start=mid+1;

        }
        return ans;
    }
};
