#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("Before swapping the numbers are : %d & %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the required two numbers are %d and %d",a,b);
    return 0;
}
