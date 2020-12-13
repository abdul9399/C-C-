#include <stdio.h>
#include<string.h>
int main()
{
    //TC1 -> "this is a test string";       //Output -> string
    //TC2 -> "geeksforgeeks is a platform for geeks"        //Output -> platform
    //TC3 -> "It was a pleasent time"       //Output -> pleasent
    char a[100];
    int arr[100],i,s=-1;
    printf("enter the string:\n");
    scanf("%[^\n]s",a);
    int n=strlen(a);
    int maxlen=0,currlen=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==' ')
        {
            if(currlen%2==0){
                if(currlen>maxlen)
                {
                    maxlen=currlen;
                    s=i-currlen;
                }
            }
            currlen=0;
        }
        else
        {
            currlen++;
        }
    }
    if(currlen%2==0)
    {
        if(maxlen<currlen)
        {
            maxlen=currlen;
            s=i-currlen;
        }
    }
    for(i=s;i<n&&a[i]!=' ';i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
