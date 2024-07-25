#include <stdio.h>
#include <ctype.h>
#define harf 100
int main() {
    char cumle[harf];
    /*harflerin dizisi kaydetmek icin*/
    int i, dizi[26] = {0}; 
    printf("Bir metin giriniz : ");
    fgets(cumle, harf, stdin);
    char *h = cumle;
    while (*h != '\0') {
    	/*sadece harfleri almasi için*/
        if (isalpha(*h)) { 
            /*dizinin içerigini guncelemek için*/
            dizi[tolower(*h) - 'a']++; 
        }
        h++;}
    printf("Metindeki her harfin sayisi :\n");
    /*her harfin kaç kere tekrarlandigi*/
    for (i = 0; i < 26; i++) {
        if (dizi[i] != 0) {
            printf("%c : %d\n", 'a' + i, dizi[i]);
        }}
    return 0;
}
