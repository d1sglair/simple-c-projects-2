#include <stdio.h>

int cube(int number)
{
    return(number*number*number);
}
int main()
{
    int number;
  
    scanf("%d",&number);
   
    printf("%d\n",cube(number));
}
