//Write a program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int a,count=0,RESULT=0;
    printf("Enter a NUMBER");
    scanf("%d",&a);
    while(a!=0)
    {
        RESULT=a&1;
        count++;
        if(RESULT==1)
        {
            printf("%d",count);
            break;
        }
        a=a>>1;
    }
    return 0;
}
