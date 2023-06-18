#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    while(1)
    {
    switch(1)
    {
    case 1:
       a=sizeof(int);
       printf("Size of int variable is %d",a);
       printf("\n");
    case 2:
        b=sizeof(char);
        printf("Size of char variable is %d",b);
        printf("\n");
    case 3:
        c=sizeof(float);
        printf("Size of float variable is %d",c);
        printf("\n");
    case 4:
        d=sizeof(double);
        printf("Size of double variable is %d",d);
    case 5:
        exit(0);
    }
    }
return 0;
}
