#include<stdio.h>
int main()

{
    int number;
    int i;
    
    
    printf("Enter a Number : ");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        if((number%i)==0)
        {
            printf("%d\n", i);
        }
    }
    
}
