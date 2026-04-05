#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1;
    double x2,y2;
    double distance;
    double egim;
    printf("x1 : ");
    scanf("%lf",&x1);
    printf("y1 : ");
    scanf("%lf",&y1);
    printf("x2 : ");
    scanf("%lf",&x2);
    printf("y2 : ");
    scanf("%lf",&y2);
    
   
    
    distance = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
    
    egim = (y2-y1)/(x2-x1);
    
    

    
    printf("distance = %lf\n", distance);
    printf("egim = %lf\n", egim);
}
