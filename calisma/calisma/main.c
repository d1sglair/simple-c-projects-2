#include <stdio.h>
#include <stdlib.h>

int main()
{
//    unsigned int tamSayi =0;
//    printf("\nDegisken: %u\n",tamSayi);
//
//    scanf("%d",&tamSayi);
//    printf("\nDegisken: %d",tamSayi);
//    char karekter = 'E';
//
//    float noktaliSayi=3.14;
//    printf("\npi:%.2f",noktaliSayi);
//    printf("\n Karekter: %c",karekter);

//    int grade=45;

//    if(grade<60)
//    {
//       printf("\nKaldiniz!");
//       printf("\nYeni Not:");
//       scanf("%d",&grade);
//    }
//
//    else
//    {
//        printf("\nGectiniz!");
//    }
//


//    puts(grade>=60?puts("Gectiniz"):puts("Kaldiniz"));

//    char cont = 'e';
//
//    while(cont=='e' || cont =='E')
//    {
//        system("cls");
//        printf("\nGrade: ");
//    scanf("%d",&grade);
//
//    if(grade<0 || grade>100)
//    {
//        printf("\nHatali Not!");
//    }
//    else if(grade>90 )
//    {
//        printf("%d : A",grade);
//    }
//    else if(grade>80) {
//
//        printf("%d : B",grade);
//    }
//
//    else if(grade>70){
//        printf("%d : C",grade);
//    }
//    else if(grade>60)
//    {
//        printf("%d : D",grade);
//    }
//    else
//    {
//        printf("%d : F",grade);
//        printf("\nFailed!");
//    }
//
//    printf("\nDevam etmek istiyor musunuz? (e/E)");
//    scanf(" %c",&cont);
//
//    }


    // sinifin not ortalamasini hesaplama

    float avg;
    int grade;
    int sum=0;
    int count=0;

//    int numberofStudent =0;
//    printf("\nSinif mevcudunu giriniz: ");
//    scanf("%d",&numberofStudent);
//
//    while(count<numberofStudent)
//    {
//        grade=0;
//        printf("\n%d. Ogrenci Notu: ",count+1);
//        scanf("%d",&grade);
//        sum = sum+grade;
//        count=count+1;
//    }
//
//    avg = sum/numberofStudent;
//
//    printf("Sinif not ortalamasi : %d ",avg);





    while(grade!=-1)
    {
        grade=0;
        printf("\n%d. Ogrenci Notu (cikis icin -1): ",count+1);
        scanf("%d",&grade);
        sum = sum+grade;
        count=count+1;
    }


            avg = (float)(sum+1)/(count-1);
            printf("%d ogrenciye ait not ortalamasi : %.3f ",count-1,avg);





    return 0;
}
