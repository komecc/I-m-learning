#include <stdio.h>
int main(){
    int bugun, dogumtarihi;
    printf("Dogum tarihinizi giriniz");
    scanf("%d", &dogumtarihi);
    printf("bugunun tarini giriniz");
    scanf("%d",&bugun);
    printf("yasınız %d",bugun-dogumtarihi);
}