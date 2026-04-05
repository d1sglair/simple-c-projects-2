#include <stdio.h>

int main()

{
    int years , weeks;
    int days , a;

    printf("Enter days : ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days %365) /7;
    a = (days %365) %7;
    
    
    printf("%d Years\n", years);
    printf("%d Weeks\n", weeks);
    printf("%d Days\n", a);
}

