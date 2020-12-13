#include<stdio.h>
int main()
{
    int size,n,ind;
    scanf("%d%d",&size,&n);
    int cache[size],arr[n];
    for(ind=0;ind<n;scanf("%d",&arr[ind++]));
    int x=lru(cache,size,arr,n);
    printf("%d\n",x);
    for(ind=0;ind<size;ind++)
    printf("%d ",cache[ind]);
}
int lru(int *cache,int size,int *arr,int n)
{
    int front=-1,rear=-1,pf=0,num,flag,ind,ctr;
        if(front==-1)
        {
            cache[0]=arr[0];
            pf++;
            front++;
            rear++;
        }
        for(ind=1;ind<n;ind++)
        {   flag=0;
            for(ctr=front;ctr<=rear;ctr++)
            {
                if(cache[ctr]==arr[ind])//1
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                pf++;
                if(rear<size-1)
                rear++;
                for(ctr=rear;ctr>front;ctr--)
                cache[ctr]=cache[ctr-1];
                cache[front]=arr[ind];
            }
            else
            {
                for(int i=ctr;i>=1;i--)
                    cache[i]=cache[i-1];
                    cache[0]=arr[ind];
            }
        }
        return pf;
}
/*
3 16
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 - 11
*/