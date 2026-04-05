#include <stdio.h>
void ucgenyaz(int satirsayisi)
{
  
    
    for(int i=0;i<=satirsayisi;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    
    scanf("%d",&n);
    
    ucgenyaz(n);
}

