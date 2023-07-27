int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int low;int high;
    int index=INT_MAX;
    int row=-1;
    int mid;
    for(int i=0;i<n;i++)
    {       low=0;
            high=m-1;
        
        while(low<=high)
        {   
            mid=(high+low)/2;
            if(matrix[i][mid]==1)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
           

        }
        if(index>low)
        {
            index=low;
            row=i;
        }
       
         


    }
    return row;
}
