#include <stdio.h>
int main()
{
    int rows;
    int i;
    int j;
    
    printf("Rows : ");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
            
        }
        printf("\n");
    }
    

}
