#include <stdio.h>

double kuvvet(double taban,double us)
{
    double temp=1;
    
    
    if(us==0)
        return temp;
    
    else
        for(double i=1;i<=us;i++)
        {
            temp = temp*taban;
        }
        
        
    
    return temp;
    
}


int main()
{
    
    double taban,us;
    
    scanf("%lf %lf",&taban,&us);
    
    printf("%lf^%lf = %lf\n",taban,us,kuvvet(taban, us));
}

