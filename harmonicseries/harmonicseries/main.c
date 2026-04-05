#include<stdio.h>
int main()
{
    float n;
    float sum;
    float i;
    sum = 0;
    
    printf("Enter Number : ");
    scanf("%f",&n);
    
    for(i=1;i<=n;i++)
    {
        sum = sum + 1/i;
        printf("1/%f\n",i);
    }
    printf("sum : %f\n",sum);
    
}
