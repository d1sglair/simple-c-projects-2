#include <stdio.h>
#include <math.h>

double hacimBul(double ayrit);
double alanBul(double ayrit);
double ykosegenBul(double ayrit);
double ckosegenBul(double ayrit);

int main()
{
    double ayrit;
    double hacim, alan, ykosegen, ckosegen;
    
    printf("Lutfen hesapla yapmak istediginiz kupun bir ayrit uzunlugunu giriniz : ");
    scanf("%lf",&ayrit);
    
    hacim = hacimBul(ayrit);
    alan = alanBul(ayrit);
    ykosegen = ykosegenBul(ayrit);
    ckosegen = ckosegenBul(ayrit);
    
    printf("Hacim = %lf\n",hacim);
    printf("Alan = %lf\n",alan);
    printf("Yuzey Kosegeni = %lf\n",ykosegen);
    printf("Cisim Kosegeni = %lf\n",ckosegen);
}
double hacimBul(double ayrit)
{
    return(ayrit*ayrit*ayrit);
}
double alanBul(double ayrit)
{
    return(6*ayrit*ayrit);
}
double ykosegenBul(double ayrit)
{
    return(sqrt(2)*ayrit);
}
double ckosegenBul(double ayrit)
{
    return(sqrt(3)*ayrit);
}


