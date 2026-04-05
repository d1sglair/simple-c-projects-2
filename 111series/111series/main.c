#include<stdio.h>
int main()
{
    int a;
    double i;
    int counter=0;
    double sum = 0;
    
    i = 0;
    printf("enter rows :");
    scanf("%d",&a);
    
    while(counter<a)
    {
        counter++;
        i = (i*10) + 1;
        sum = sum + i;
        
        printf("%lf\n", i);
    
    
    }
    
    printf("sum = %lf\n",sum);
    
    

}

