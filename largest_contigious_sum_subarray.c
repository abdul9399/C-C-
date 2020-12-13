#include<stdio.h>
#include<limits.h>
int largest_sum(int *arr,int n)
{
    int max=arr[0],current_max=0;
    for(int j=1;j<n;j++)
    {
        current_max=current_max+arr[j];
        if (current_max>max)
        {
            max=current_max;
        }
        if(current_max<0)
        {
            current_max=0;
        }
    }
    return max;
}
int main()
{
    int n,i,j;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int k=largest_sum(a,n);
    printf("%d",k);
}