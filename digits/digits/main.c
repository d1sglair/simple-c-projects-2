#include<stdio.h>

int find_sum_digits(int num);


int main()
{
    int num, sum;
    
    scanf("%d",&num);
    sum = find_sum_digits(num);
    
    
    
    printf("sum of the digits : %d\n", sum);
}
 


int find_sum_digits(int num)
{
    int r, sum = 0;
    
    while(num>0)
    {
        r = num %10;
        sum = sum + r;
        num = num/10;
    }
    
    return(sum);
}





