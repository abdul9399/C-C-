#include<stdio.h>
#include<math.h>
//#define square(x,y) (x)*(y)
void fun(int k)
{
    printf("Hi");
    return;
}
void fun(double k)
{
    printf("Hello");
    return;
}
int main()
{
    fun(3);
}