#include<stdio.h>
int main()
{
    int n;
    printf("enter n value for pattern:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++,printf("\n"))
    {
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        
    }
    
}