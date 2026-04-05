#include <stdio.h>

int main()

{
    int a;
    int i;
    
    i = 0 ;
    
    printf("Please Enter a Number : ");
    scanf("%d", &a);
    
    while(i<a-2)
    {
        i = i + 2;
        
        printf("%d\n", i);
    }
    
    
 
}
