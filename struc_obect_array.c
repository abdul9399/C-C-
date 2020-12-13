#include<stdio.h>
struct Node
{
    /* data */
    int data;
};

int main()
{
    int i=0,x;
    struct Node a[100];
    printf("enter the data values for each onbext in array:\n");
    scanf("%d",&x);
    a[i].data=x;
    while(x!=-1)
    {
        scanf("%d",&x);
        i++;
        a[i].data=x;
    }
    printf("the values of data of each object is:\n");
    for(i=0;a[i].data!=-1;i++)
    {
        printf("%d ",a[i].data);
    }
}