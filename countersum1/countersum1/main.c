
//Program that calculates sum of the numbers between entered numbers and average of the sum




#include<stdio.h>

int main()


{
    float min;
    float max;
    int i;
    int sum;
    float average;
    sum = 0;
    
   
    
        printf("Please Enter Min : ");
        scanf("%f", &min);
        
        printf("Please Enter Max : ");
        scanf("%f", &max);
    
   
        if(min>=max)
            printf("Invalid Numbers Entered\n");
    else
        
    {
        
        for(i=min;i<=max;i++)
        {
            sum = i + sum;
        }
        
        average = sum / (max - min + 1);
        
        printf("Sum : %d\n", sum);
        printf("Average : %f\n", average);
        
        
    }
        
    
}
