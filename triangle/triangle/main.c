#include <stdio.h>

int main()
{
    float a, b, c, x;
    
    printf("Enter the angles of the triange (abc).\n");
    printf("A : ");
    scanf("%f", &a);
    printf("B : ");
    scanf("%f", &b);
    printf("C : ");
    scanf("%f", &c);
    
    x = a + b + c;
    
    if( x == 180)
    {
        if(a == b && b == c)
            printf("Its a Equilateral.\n");
        else if(a == b || b == a || a == c )
            printf("Its a Isosceles.\n");
        else
            printf("Its Scalene.\n");
        
            
    }
    
    else
        printf("Its not a triangle.\n");
 
}
