#include<stdio.h>


int main()

{
    
    int x;
    float i;
    float f;
    f = 1;
    
    printf("Please Enter a Number That You Want To Calculate the Factorial : ");
    scanf("%d", &x);
    
    for(i=1;i<=x;i++)
    {
        
        f = f*i;
        
        
        
    }
    
    
    printf("Factorial = %f\n", f);
    
}
