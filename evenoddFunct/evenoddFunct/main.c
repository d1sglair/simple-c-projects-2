#include <stdio.h>

int even(int number)
{
    return(number%2==0);
}

int main()
{
    int number;
    
    scanf("%d",&number);
    
    if(even(number))
    {
        printf("%d is even\n",number);
    }
    else
    {
        printf("%d is odd\n",number);
    }
}
