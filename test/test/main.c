#include <stdlib.h>
#include <stdio.h>

static void failorpass(int score)
{
    if(score>50)
    printf("pass");
    else
    printf("fail");
    
}

int main()
{
  int score;
  
  printf("Please Enter Score : ");
  scanf("%d",&score);
  failorpass(score);


}
