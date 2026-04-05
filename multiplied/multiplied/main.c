#include<stdio.h>
int main()
{
    int number1;
    int number2;
    
    
    printf("Enter 1st : ");
    scanf("%d",&number1);
    printf("Enter 2nd : ");
    scanf("%d",&number2);
    
    if((number1%number2)==0 || (number2%number1)==0)
    {
        printf("They Are Multiplied !\n");
    }
    else
        printf("They Are Not Muliplied !\n");
    
}

