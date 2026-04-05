#include <stdio.h>

int main()

{
    int id;
    int hours;
    int salary;
    
    printf("Please Enter Your ID Number (5 Characters) : ");
    scanf("%d", &id);

    
        if(id>=10000 && id<=99999)
        {
            printf("Please Enter Worked Hours : ");
            scanf("%d", &hours);
            
            salary = hours*100;
            
            printf("ID Number : %d\n", id);
            printf("Salary : $%d\n", salary);
        }
        
        else
            printf("Wrong ID Entered.\n");

}
