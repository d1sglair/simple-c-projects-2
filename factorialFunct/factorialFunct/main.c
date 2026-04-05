#include <stdio.h>

double factorial(double num);

int main()
{
    double num;
    double fact;
    
    scanf("%lf",&num);
    
    fact = factorial(num);
    
    printf("%lf\n",fact);
    
}

double factorial(double num)
{
    double mult=1;
    for(int i=1;i<=num;i++)
    {
        mult = mult*i;
    }
   if(num>0)
   {
       return(mult);
   }
    else if(num==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
        
    
}

