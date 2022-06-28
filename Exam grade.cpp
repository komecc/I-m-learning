#include <stdio.h>
int main(){
    int a;
    printf("Notunuzu giriniz");
    scanf("%d",&a);
    if(a>=90)
            printf("AA");
    else if(a>=80)
            printf("BA");
    else if(a>=70)
            printf("BB");
    else
            printf("F");
}