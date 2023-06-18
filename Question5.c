//Write a program to input a three digit number and display the sum of the digits
#include<stdio.h>
int main()
{
    int x;
    int rem=0,sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    sum=sum+rem;

    rem=x%10;
    x=x/10;
    sum=sum+rem;

    rem=x%10;
    x=x/10;
    sum=sum+rem;
    printf("The sum of three digits is %d",sum);
    return 0;
}
