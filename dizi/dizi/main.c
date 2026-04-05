#include <stdio.h>
#include <stdlib.h>

int main()

{
    int dizi[10];
    int terimSayi;
    int n;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    int n6 = 0;
    int n7 = 0;
    int n8 = 0;
    int n9 = 0;
    int n10 = 0;
    
    
    
    
    
    for(int i=1;i<=10;i++)
    {
        printf("%d.terim girin : ",i);
        scanf("%d",&dizi[i]);
        
        n = dizi[i];
            switch(n)
            {
                case 1:
                    n1++;
                    break;
                case 2:
                    n2++;
                    break;
                case 3:
                    n3++;
                    break;
                case 4:
                    n4++;
                    break;
                case 5:
                    n5++;
                    break;
                case 6:
                    n6++;
                    break;
                case 7:
                    n7++;
                    break;
                case 8:
                    n8++;
                    break;
                case 9:
                    n9++;
                    break;
                case 10:
                    n10++;
                    break;
                default:
                    break;
                }
                
        
        
        
    }
    printf("\n");
    printf("# of-1 : %f\n",(float)n1*10);
    printf("# of-2 : %f\n",(float)n2*10);
    printf("# of-3 : %f\n",(float)n3*10);
    printf("# of-4 : %f\n",(float)n4*10);
    printf("# of-5 : %f\n",(float)n5*10);
    printf("# of-6 : %f\n",(float)n6*10);
    printf("# of-7 : %f\n",(float)n7*10);
    printf("# of-8 : %f\n",(float)n8*10);
    printf("# of-9 : %f\n",(float)n9*10);
    printf("# of-10 : %f\n",(float)n10*10);
    
 
       
}
    
    
    


    



