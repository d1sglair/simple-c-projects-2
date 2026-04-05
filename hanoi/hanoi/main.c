#include <stdio.h>
#include <time.h>


//Disk 1 en kucuk
//A kulesi disklerin ilk bulundugu , C kulesi disklerin en son toplandigi yer



void Hanoi(int n, char rodFrom, char rodTo, char rodX)
//rodFrom islem yapilacak diskin bulundugu kule
//rodTo diskin gidecegi kule
//rodX problemin cozumesi icin yardimci kule

{
    if (n == 1)
    {
        printf("\n Disk 1 moved from rod %c to rod %c", rodFrom, rodTo);//en son Disk 1'in yukarda olmasi saglandi
        return;//Sadece bir disk kalana kadar fonksiyonun calismasi saglandi
    }
    Hanoi(n-1, rodFrom, rodX, rodTo);
    printf("\n Disk %d moved from rod %c to rod %c", n, rodFrom, rodTo);
    Hanoi(n-1, rodX, rodTo, rodFrom);
    //From, To ve X kuleleri yer degistirelerek disklerin kurala uygun dizilmesi saglandi
}

int main()
{
    int n;
    double time_spent = 0.0;
    
    printf("Enter the number of the disks : ");
    scanf("%d",&n);//Disk sayisi alindi
    Hanoi(n, 'A', 'C', 'B');//Fonksiyon cagirildi
    clock_t begin = clock();
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elapsed time if %lf seconds\n", time_spent);
    return 0;
}


