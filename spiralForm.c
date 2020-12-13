#include <stdio.h>

int main()
{
  int n,i,j;
  printf("enter a value for spiralForm");
  scanf("%d",&n);
  int t=0,r=n-1,l=0,b=n-1;
  int m[n][n],v=3;
  while(t<=b && l<=r){
    for(i=l;i<=r;i++){
      m[t][i]=v;
      
    }t++;
    for(i=t;i<=b;i++){
      m[i][r]=v;
      
    }r--;
    for(i=r;i>=l;i--){
      m[b][i]=v;
      
    }b--;
    for(i=b;i>=t;i--){
      m[i][l]=v;
      
    }l++;
    v=v-1;
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",m[i][j]);
    }printf("\n");
  }
    return 0;
}


