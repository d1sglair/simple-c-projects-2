#include <stdio.h>

int main()
{
    int not;
    char cont = 'e';
    
    while(cont=='e' || cont =='E')
    {
        printf("\nNotunuzu Girin : ");
        scanf("%d", &not);
        
        if(not >100 || not<0)
            printf("\nGecersiz Not Girdiniz");
        else if(not>=90)
            printf("\nNotunuz A");
        else if(not>=80)
            printf("\nNotunuz B");
        else if(not>=70)
            printf("\nNotunuz C");
        else if(not>=60)
            printf("\nNotunuz D");
        else if(not>=50)
            printf("\nNotunuz E");
        else if(not>=40)
            printf("\nNotunuz F");
        else
            printf("Dersten Kaldınız\n");
        
        printf("\nDevam Etmek Istiyor Musunuz ? :  (e/E)");
        scanf(" %c",&cont);
    }
}
