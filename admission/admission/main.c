#include <stdio.h>

int main()

{
    int math, phy, chem;
    
    printf("Please Enter Marks of the Subjects Given Below.\n\n ");
    printf("Maths : ");
    scanf("%d", &math);
    printf(" Physics : ");
    scanf("%d", &phy);
    printf(" Chemistry : ");
    scanf("%d", &chem);
    
    if(math>=65 && phy>=55 && chem>=50 )
    {
        if(math+phy+chem >=190 || math+phy>=140)
            printf("Youre Eligible");
        else
            printf("Youre Not Eligible.\n");
        
    }
    else
        printf("Youre Not Eligible.\n");
    
    
}

