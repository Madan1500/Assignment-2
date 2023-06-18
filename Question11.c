#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a digit: ");
    scanf("%d",&y);
    x=x*10;
    printf("%d",x+y);
    return 0;
}
