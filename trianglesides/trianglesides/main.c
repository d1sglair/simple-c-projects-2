#include <stdio.h>

int main()

{
    float a, b, c;
    float x, y, z;
    
    printf("Enter the side' lenghts of the triangle.(ABC)\n");
    printf("A : ");
    scanf("%f", &a);
    printf("B : ");
    scanf("%f", &b);
    printf("C : ");
    scanf("%f", &c);
    
    x = a + b;
    y = a + c;
    z = b + c;
    
    if(x>a && x>b && x>c && y>a && y>b && y>c && z>a && z>b && z>c)
    {
        if(a==b && b==c)
            printf("Its a Equilateral.\n");
        
        else if(a==b || b==c || a==c)
            printf("Its a Isosceles.\n");
        else
            printf("Its a Scalene.\n");
            
    }
    
    else
        printf("Its not a triangle.\n");
}
