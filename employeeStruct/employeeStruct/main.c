#include <stdio.h>
#include <string.h>
#include <time.h>

struct Book
{
    char name[50];
    char  author[50];
    float price;
};

int main()
{
    struct Book book1, book2, book3;
    
    printf("Enter 1st book Name : ");
    scanf("%s",book1.name);
    printf("Enter 1st book Author : ");
    scanf("%s",&book1.author);
    printf("Enter 1st Book Price : ");
    scanf("%f",&book1.price);
    
    printf("\nEnter 2nd Book Name : ");
    scanf("%s",book2.name);
    printf("Enter 2nd Book Author : ");
    scanf("%s",&book2.author);
    printf("Enter 2nd Book Price : ");
    scanf("%f",&book2.price);
    
    printf("\nEnter 3rd Book Name : ");
    scanf("%s",book3.name);
    printf("Enter 3rd Book Author : ");
    scanf("%s",&book3.author);
    printf("Enter 3rd Book Price : ");
    scanf("%f",&book3.price);
    
    
    
    printf("\n\n::::Book 1 Info::::\n");
    printf("-----------------\n");
    printf("Name ==> %s\n",book1.name);
    printf("Author ==> %s\n",book1.author);
    printf("Price ==> %2.f\n\n\n",book1.price);
    
    printf("::::Book 2 Info::::\n");
    printf("-----------------\n");
    printf("Name ==> %s\n",book2.name);
    printf("Author ==> %s\n",book2.author);
    printf("Price ==> %.f\n\n\n",book2.price);
    
    printf("::::Book 3 Info::::\n");
    printf("-----------------\n");
    printf("Name ==> %s\n",book3.name);
    printf("Author ==> %s\n",book3.author);
    printf("Price ==> %.2f\n\n\n",book3.price);
    
    
    struct Book highestPriceBook;
        if (book1.price >= book2.price && book1.price >= book3.price)
        {
            highestPriceBook = book1;
        } else if (book2.price >= book1.price && book2.price >= book3.price)
        {
            highestPriceBook = book2;
        } else
        {
            highestPriceBook = book3;
        }

        
        printf("\nBook with the Highest Price:\n");
        printf("Author: %s\n", highestPriceBook.author);
        printf("Name: %s\n", highestPriceBook.name);
        printf("Price: %.2f\n", highestPriceBook.price);

    
    
}


    
    
    
    
        
    
    
    
    

