#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter inr to convert to usd :");
    scanf("%f",&inr);
    usd=inr/76.23;
    printf("\nThe amount in usd is %f",usd);
    return 0;
}
