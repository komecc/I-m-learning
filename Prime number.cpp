#include <stdio.h>
int main(){
    int sayi, asal=0;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    for(int i=2;i<=sayi;i++){
        if(sayi%i==0)
        asal++;
        break;
    }
    if(asal==0)
    printf("asal sayıdır");
    else 
    printf("asal sayı degildir");
}