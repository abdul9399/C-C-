#include<stdio.h>
#include<string.h>
#define l 100000
int main()
{
    char c1[l],c2[l],c3[l];
    int i,j;
    printf("Enter the 1st string:\n");
    scanf("%s",c1);
    printf("Enter the 2nd string:\n");
    scanf("%s",c2);
    printf("Enter the 3rd string:\n");
    scanf("%s",c3);
    if((strcmp(c1,c2)<=0)&&(strcmp(c1,c3)<=0))
    {
        if(strcmp(c2,c3)<=0)
        {
            printf("%s%s%s",c1,c2,c3);
        }
        else
        {
            printf("%s%s%s",c1,c3,c2);
        }
        
    }
    else if((strcmp(c2,c1)<=0)&&(strcmp(c2,c3)<=0))
    {
        if(strcmp(c1,c3)<=0)
        {
            printf("%s%s%s",c2,c1,c3);
        }
        else
        {
            printf("%s%s%s",c2,c3,c1);
        }   
    }
    else if((strcmp(c3,c2)<=0)&&(strcmp(c3,c1)<=0))
    {
        if(strcmp(c1,c2)<=0)
        {
            printf("%s%s%s",c3,c1,c2);
        }
        else
        {
            printf("%s%s%s",c3,c2,c1);
        }
    }
}