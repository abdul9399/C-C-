#include<stdio.h>
#include<stdlib.h>
struct Matrix
{
    int a,b;
};
struct Matrix IndexofElement(int r,int c,int arr[r][c],int k)
{
    int i,j;
    struct Matrix mat;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(arr[i][j]==k)
            {
                mat.a=i;
                mat.b=j;
                return mat;
            }
        }
    }
    mat.a=-1;
    mat.b=-1;
    return mat;
}
int main()
{
    int r,c,i,j,k;
    struct Matrix mat;
    printf("enter row and col value of amtrix:\n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("\n enter the matrix elements:\n");
    for ( i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d ",&a[i][j]);
        }
    }
    printf("\nenter the element to find in matrix:\n");
    scanf("%d",&k);
    mat=IndexofElement(r,c,a,k);
    printf("%d %d",mat.a,mat.b);

}
