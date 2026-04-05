#include <stdio.h>

int main()

{
    
    float purchase;
    float new;
    float discount;
    
    printf("Please Enter Purchase Amount : ");
    scanf("%f", &purchase);
    
    if(purchase>2000)
    {
        
    
        discount = purchase * 0.05;
        
        new = purchase - discount;
        
        printf("Discount : %f\n", discount);
        printf("New Amount : %f\n", new);
        
        
    }
    
    else
       
        
     printf("No Discounts\n");
        
}
