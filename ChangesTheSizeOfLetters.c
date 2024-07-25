#include <stdio.h>
#include <ctype.h>
#define BUYUKLUK 100
int main() {
  char CUMLE[BUYUKLUK];
  /*pointer olusturduk*/
  char*h;
  printf("Bir metin giriniz:\n\n");
  /*kulanicidan metini almak icin*/
  fgets(CUMLE,BUYUKLUK,stdin);
  /*cumle dizisi pointer karakteri ile eşitledik*/
  h = CUMLE;
  do{
  	/*kuçukse buyutiyor*/
    if (islower(*h)) {
      *h = toupper(*h);
    } 
    /*buyukse kuçultiyor*/
	else if(isupper(*h)){
      *h = tolower(*h);
    }
    h++;
  }while (*h != '\0');
  printf("%s", CUMLE);
  return 0;
}