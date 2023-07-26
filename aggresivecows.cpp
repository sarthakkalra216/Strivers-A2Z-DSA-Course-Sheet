bool check(vector<int> stalls,int dist ,int k)
{
    int cowscnt=1;
    int last=stalls[0];
    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-last>=dist)
        {
            cowscnt++;
            last=stalls[i];
        }
        if(cowscnt>=k)return true;
    }
    return false;
    
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int low=1;  
    int n=stalls.size();
    int high=stalls[n-1]-stalls[0];
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(check(stalls,mid,k)==true){
            low=mid+1;
        }
        else
        high=mid-1;

    }
    return high;

}
