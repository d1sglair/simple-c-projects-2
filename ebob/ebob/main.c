#include <stdio.h>

int ebob(int n1,int n2)
{
    
    int i;
    
    
    for(i=n1;i>0;i--)
    {
        if(n1%i==0)
        {
            if(n2%i==0)
                break;
            else
                continue;
        }
        else
            continue;
        
    }
    
    return i;
}
    
    int main()
    {
        int a,b;
        
        scanf("%d %d",&a,&b);
        
        printf("EBOB(%d,%d) = %d\n",a,b,ebob(a, b));
        
        
    }

