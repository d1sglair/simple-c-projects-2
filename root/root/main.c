#include <stdio.h>
#include <math.h>
int main()

{
    
    float x ;
    float root1, root2;
    float disc;
    float a,b,c;
    
    
    
    
    printf("Please Enter\na\nb\nc\n");
    scanf("\n\n\n%f%f%f", &a,&b,&c);
   
    disc = b*b - 4*a*c;

    
    
    if(disc<0)
        printf("Roots are Complex\n");
    else if(disc == 0)
    {
        root1 = -b/2*a;
        root2 = root1;
        printf("%f , %f",root1,root2);
    }
        else
        {
            x= sqrt(disc);
    root1 = (-b - x)/(2*a);
    root2 = (c/a)/root1;
    
            printf("Root 1 = %f\n", root1);
            printf("Root 2 = %f\n", root2);
    
    
           }
    
    {
        
       
        
        
        
        
    }
    
    
    
    
}
