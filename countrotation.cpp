#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.  
    int start=0;
    int end=arr.size()-1;
    int mid;
    int index=-1;
    int ans=INT_MAX;
    while(start<=end)
    {
        mid=(start+end)/2;
        //left sorted
        if(arr[start]<=arr[mid])
        {
            if(ans>arr[start])
            {
                ans=arr[start];
                index=start;
            }
            start=mid+1;
        }
        //right sorted
        else{
            if(ans>arr[mid])
            {
                ans=arr[mid];
                index=mid;
            }
            end=mid-1;
        }
    }
    return index;

}
