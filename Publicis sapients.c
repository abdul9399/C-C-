#include <stdio.h>

int main()
{
    char ch[100];
    scanf("%[^\n]s",ch);
    int i,j;
    for(i=0;ch[i];i++)
    {
        j=i+1;
        if(ch[i]!=' ' &&(ch[j]=='a'||ch[j]=='e'||ch[j]=='i'||ch[j]=='o'||ch[j]=='u'))
        {
            char temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
        }
    }
    int k=0;
    for(j=0;ch[j];j++)
    {
        if(ch[j]==' ')
        {
            printf("%d",k);
            k=0;
            continue;
        }
        printf("%c",ch[j]);
        k++;
    }
    return 0;
}
