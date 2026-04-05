#include <stdio.h>

int main()

{
    
    float weekly , tax;
    int age;
    int x;
    char chr ='y';

    
    while(chr == 'y' ||chr == 'Y')
        
    
    {
        
        printf("Please Enter Your Age : ");
        scanf("%d", &age);
        
        if(age<18)
            printf("Youre Tax Free\n");
        
        else
        {
            printf("Please Enter Your Weekly Gross : ");
            scanf("%f", &weekly);
            
            
            printf("student(1) pensioner(2) employed(3) :  ");
            scanf("%d", &x);
            
            if(x==1)
            {
                tax = weekly * 15/100;
                printf("tax = %f\n", tax);
                
            }
            else if(x==2)
            {
                
                tax = weekly * 10/100;
                printf("tax 0 %f\n", tax);
            }
            else if(x==3)
            {
                if(weekly>2500)
                {
                    tax = weekly * 1/4;
                    printf("tax = %f\n", tax);
                    
                    
                }
                else if(weekly ==2500)
                    printf("tax = 500\n");
                else
                    printf("wrong\n");
                
            }
            
            else
                printf("wrong\n");
            
            
            
            
            
        }
        
        printf("again(y/Y) : ");
        scanf( "%s", &chr);
    }
    
   
}


