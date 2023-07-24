class Solution {
public:
int finddays(vector<int> weights,int mid)
{
    int load=0;
    int day=1;
    for(int i=0;i<weights.size();i++)
    {
    if(load+weights[i]>mid)
    {
        day=day+1;
        load=weights[i];

    }else{
        load+=weights[i];
    }
    }
    return day;


}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            int numberofdays=finddays(weights,mid);
            if(numberofdays<=days)
            {
                high=mid-1;
            }
            else 
            low=mid+1;
        }
        return low;
    }
};
