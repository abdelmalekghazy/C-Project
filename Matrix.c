#include<stdio.h>
int main(){
	int m,n,a=0,b=1,c=0,p=1;
	/*matris matrisin ilk satrini kaydetmek için
	matris2 matriste degisiklikleri kaydetmek için*/
	int matris[100],matris2[100];
	printf("Matris boyutlarini giriniz (m):");
	scanf("%d",&m);
  printf("Matris boyutlarini giriniz (n):");
	scanf("%d",&n);
	/*burda her dizinin 0dan4de kadar her hanede kac oldugunu belirlemek*/
	for(a=0;a<m;a++){
		matris[a]=p;
		matris2[a]=p;
		printf("\t%d",matris[a]);
		p++;
	}
	for(b=1;b<n;b++){
		printf("\n\t");
		for(c=0;c<m;c++){
			/*carpma islemi*/
			matris2[c]=matris[c]*matris2[c];
			printf("%d\t",matris2[c]);
		}
	}
	return 0;
}
