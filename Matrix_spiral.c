#include<stdio.h>
void spiralPrinting(int r,int c,int arr[r][c])
{
    int l=0,t=0,i,j;
    while(l<c && t<r)
    {
        for(i=l;i<c;i++)
        {
            printf("%d ",arr[t][i]);
        }
        t++;
        for(j=t;j<r;j++)
        {
            printf("%d ",arr[j][c-1]);
        }
        c--;
        if(t<r){
        for(i=c-1;i>=l;i--)
        {
            printf("%d ",arr[r-1][i]);
        }
        r--;
        }
        if(l<c){
        for(j=r-1;j>=t;j--)
        {
            printf("%d ",arr[j][l]);
        }
        l++;
        }
    }
}
int main()
{
    int r,c;
    printf("Enter the r,c values:\n");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the matrix values:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    spiralPrinting(r,c,arr);
}