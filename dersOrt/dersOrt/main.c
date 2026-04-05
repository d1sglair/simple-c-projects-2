#include <stdio.h>


int main()
{
    int toplam = 0;
    float ortalama;
    float not[9];
    int counter = 0;
    
    
    for(int i=1;i<=9;i++)
    {
        scanf("%f",&not[i]);
        toplam = toplam + not[i];
    }
    ortalama = toplam/10;
    for(int j=1;j<=9;j++)
    {
        if(ortalama<50)
        {
            if(not[j]<50)
                printf("Ders %d kaldiniz\n",j);
            else if(not[j]>=50)
                printf("Ders %d gectiniz\n",j);
        }
        else if(ortalama>=50)
        {
            if(not[j]<40)
                printf("Ders %d kaldiniz\n",j);
            else if(not[j]>=40)
                printf("Ders %d gectiniz\n",j);
        }
        
    }
    for(int k=1;k<=9;k++)
    {
        if(ortalama>=50)
        {
            if(not[k]<40)
                counter++;
        }
        else
        {
            if(not[k]<50)
            {
                counter++;
            }
        }
    }
    printf("%d dersten kaldiniz\n",counter);
    printf("ortalama : %f \n",ortalama);
}



