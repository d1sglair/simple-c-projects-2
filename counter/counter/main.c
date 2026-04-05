#include <stdio.h>

int main()

{
    int limit;
    int counter;
    counter = 0;
    
    printf("Please Enter a Limit Number : ");
    scanf("%d", &limit);
   
    while(counter< limit)
    {
        counter++;
        printf("%d\n", counter);
    }
}

