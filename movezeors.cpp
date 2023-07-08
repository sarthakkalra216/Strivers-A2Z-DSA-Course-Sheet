class Solution {
public:
    void moveZeroes(vector<int>& a) {
      int j=-1;
      int n=a.size();

      for(int i=0;i<n;i++)  
      {
          if(a[i]==0)
          {
              j=i;
              break;
          }
      }  
      if(j==-1)return ;
      for(int i=j+1;i<n;i++)
      {
          if(a[i]!=0){
          swap(a[j],a[i]);
          j++;
          }
      }
    }
};
