#include <stdio.h>

int main() {
    int uznlu , i, bosluk,j;
    char harf ='A';
    printf("piramidin yuksekligini giriniz: ");
    scanf("%d",&uznlu);
    for(i=0;i<=uznlu;i++){
    for (bosluk =1; bosluk<=(uznlu-i);bosluk++){
        printf(" ");
    }
    for (int j=1;j<=i;j++){
        printf("%c",harf);
        harf++;

    }
harf--;
    for(int j=1; j< i;j++){
        harf--;
        printf("%c",harf);

    }

    printf("\n");
    harf = 'A';
    }
    return 0;}
