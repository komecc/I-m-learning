#include <stdio.h>
int main(){
    int s1,s2,secim,sonuc;
    printf("Sayı giriniz");
    scanf("%d",&s1);
    printf("sayı giriniz");
    scanf("%d",&s2);
    
    printf("işlem seciniz: 1-TOPLAMA 2-ÇIKARMA 3-ÇARPMA 4-BÖLME");
    scanf("%d",&secim);
    
    if(secim==1)
    printf("sonuc:%d",s1+s2);
    else if(secim==2)
    printf("sonuc:%d",s1-s2);
    else if(secim==3)
    printf("sonuc:%d",s1*s2);
    else if(secim==4)
    printf("sonuc:%d",s1/s2);
    else
    printf("yanlış işlem seçimi");
}