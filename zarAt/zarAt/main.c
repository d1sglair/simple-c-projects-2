#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int zarAt()
{


    int i = rand()%6+1;
    return i;
}

float tekrarliZarAt(int loopNumber)
{
    int n;
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int n6=0;
    
    for(int i = 0;i<loopNumber;i++)
{
    n = zarAt();
    switch(n)
    {
    case 1:
        n1++;
        break;
    case 2:
        n2++;
        break;
    case 3:
        n3++;
        break;
    case 4:
        n4++;
        break;
    case 5:
        n5++;
        break;
    case 6:
        n6++;
        break;
    default:
        break;
    }



}

printf("#of-1: %d => %.2f\n",n1,(float)n1/loopNumber);
printf("#of-2: %d => %.2f\n",n2,(float)n2/loopNumber);
printf("#of-3: %d => %.2f\n",n3,(float)n3/loopNumber);
printf("#of-4: %d => %.2f\n",n4,(float)n4/loopNumber);
printf("#of-5: %d => %.2f\n",n5,(float)n5/loopNumber);
printf("#of-6: %d => %.2f\n",n6,(float)n6/loopNumber);

    
    return 0;
}


int main()
{
    int n;
  
    int loopNumber;
    
    srand(time(0));
    
    scanf("%d",&loopNumber);
    n = tekrarliZarAt(loopNumber);
    printf("%d\n ",n);
    


}
