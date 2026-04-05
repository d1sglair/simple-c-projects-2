#include <stdio.h>
#include <math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);


int main()
{
    double radius;
    double dia;
    double circ;
    double area;
    
    scanf("%lf",&radius);
    dia = getDiameter(radius);
    circ = getCircumference(radius);
    area = getArea(radius);
    
    printf("dia = %lf\n",dia);
    printf("circ = %lf\n",circ);
    printf("area = %lf\n",area);
        
}
    

double getDiameter(double radius)
{
    return(2*radius);
}
double getCircumference(double radius)
{
    return(2*M_PI*radius);
}
double getArea(double radius)
{
    return(M_PI*radius*radius);
}
    

