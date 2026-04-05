#include <stdio.h>

int main()

{
    int counter, sum;
    int limit;
    
    counter = 0;
    sum = 0;
    
    printf("Please Enter a Limit : ");
    scanf("%d", &limit);
    
    while(counter<limit)
    {
        counter++;
        sum = sum + counter;
        printf("%d ,Sum = %d\n", counter, sum);
        
              
    }
  
}

