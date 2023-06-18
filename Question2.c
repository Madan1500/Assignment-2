#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to see its unit place");
    scanf("%d",&a);
    printf("The last digit of %d is %d ",a,a/10);
    return 0;
}
