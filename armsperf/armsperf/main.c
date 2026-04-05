#include <stdio.h>
#include <math.h>

int checkPerfect(int num);
int checkArmstrong(int num);

int main()
{
    int num;
    scanf("%d",&num);
    
    if(checkPerfect(num))
    {
        printf("perfect\n");
    }
    else
    {
        printf("not perfect\n");
    }
    if(checkArmstrong(num))
    {
        printf("armstrong\n");
    }
    else
    {
        printf("not armstrong\n");

    }
        
}





int checkPerfect(int num)
{
    int i;
    int sum = 0;
    int n1;
    n1 = num;
    
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum = sum + i;
        }
    }
    return(sum==num);
}


int checkArmstrong(int num)
{
    int sum = 0;
    int n1,n2;
    int x;
    int digit = 0;
    
    n1 = num;
    n2 = num;
    
    while(n2!=0)
    {
        n2=n2/10;
        digit++;
    }
    
    while(n1!=0)
    {
        x = n1%10;
        sum = sum + pow(x,digit);
        n1 = n1/10;
    }
    return(sum==num);
}




