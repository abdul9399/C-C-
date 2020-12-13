#include<stdio.h>
/*int main()
{
    int n,i,j;
    scanf("%d",&n);
    int x=n;
    int l=0,r=2*n-1,t=0,b=2*n-1;
    int m[r][b];
    while(l<=r && t<=b)
    {
        for(i=l;i<r;i++)
        {
            m[t][i]=x;
        }
        t++;
        for(i=t;i<b;i++)
        {
            m[i][r-1]=x;
        }
        r--;
        for(i=r-1;i>=l;i--)
        {
            m[b-1][i]=x;
        }
        b--;
        for(i=b-1;i>=t;i--)
        {
            m[i][l]=x;
        }
        l++;
        x--;
    }
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
#include <stdio.h>

int main()
{
    int row,col,i,j;
    printf("Enter the row,col value:\n");
    scanf("%d %d",&row,&col);
    int x=1;
    int l=0,r=row,t=0,c=col;
    int m[r][c];
    while(l<=r && t<=c)
    {
        for(i=l;i<r;i++)
        {
            m[t][i]=x++;
        }
        t++;
        for(i=t;i<c;i++)
        {
            m[i][r-1]=x++;
        }
        r--;
        for(i=r-1;i>=l;i--)
        {
            m[c-1][i]=x++;
        }
        c--;
        for(i=c-1;i>=t;i--)
        {
            m[i][l]=x++;
        }
        l++;
    }
    printf("The Matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
