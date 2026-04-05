#include <stdio.h>

int prime(int num)
{
    int i;
    int j=0;
    for(i=1;i<=num;i++)
    {
      if(num%i==0)
      {
          j++;
      }
    }
    return(j==2);
}

int main()
{
    int num;
    
    scanf("%d",&num);
    
    if(prime(num))
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
}
