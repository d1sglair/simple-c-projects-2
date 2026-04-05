
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main()

{
    int toplam = 0;
    int a = fork();
    
    if(a==0)
        toplam++;
    wait(NULL);
    
    
    
    printf("%d",toplam);
    return 0;

    
        
}
