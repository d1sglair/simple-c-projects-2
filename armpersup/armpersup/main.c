#include<stdio.h>


int checkPerfect(int n);
int checkArmstrong(int n);


int main()
{
    int n;
    scanf("%d",&n);
    
    if(checkPerfect(n))
        printf("perfect");
    
    if(checkArmstrong(n))
        printf("armstong");
  
    

}






int checkPerfect(int n)
{
    int n1, i, sum = 0;
    n1 = n;
    for(i=1;i<n1;i++)
    {
        
        while(i%(n1) == 0)
        {
            sum = sum + i;
        }
    }
    return(sum == n1);
}

int checkArmstrong(int n)
{
    int n1, ld, sum;
    n1 = n;
    sum = 0;
    while(n1!=10)
    {
        ld = n1%10;
        sum += ld*ld*ld;
        n1 = n1/10;
    }
    return(sum==n1);
}

