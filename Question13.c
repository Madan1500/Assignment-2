//Write a program to take a three digit number from the user and rotate its digit by one position towards the right
#include<stdio.h>
int main()
{
    int i,q,r;
    printf("Enter a three digit number: ");
    scanf("%d",&i);
    q=i/10;
    r=i%10;
    i=r*100+q;
    printf("%d",i);
    return 0;
}
