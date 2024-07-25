#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main(){
	/*barantez*/
	int solkenar=201,sagkenar=187,solaltkenar=200,sagaltkenar=188,duzhat=186,tabanhat=205;
	int mevcut[7];
	int sayi[7];
	int et=69,cik;
	int sonuc=1,f,E,s,u=1,i=0,p=0,x=0,q;
    do{
    	do{
	 do{
	 	system("cls");
	 	system("color 27");
    	printf("\n\n\n\n%35c",solkenar);
    	for(i=0;i<=45;i++){
		printf("%c",tabanhat);
        }
     	printf("%c",sagkenar);
    	printf("\n%35c %46c",duzhat,duzhat);
     	printf("\n%35c %46c",duzhat,duzhat);
    	printf("\n%35c %46c",duzhat,duzhat);
	    printf("\n%35c \t\tSAYI TAHMIN OYUNU %16c",duzhat,duzhat);
        printf("\n%35c \t\t   HOSGELDINIZ %19c",duzhat,duzhat);
	    printf("\n%35c %46c",duzhat,duzhat);
	    printf("\n%35c \t     6 adet sayi tahmin ediniz %11c",duzhat,duzhat);
	    printf("\n%35c \tDevam etmek icin D veya d tusuna basiniz %c",duzhat,duzhat);
    	printf("\n%35c\t   CIKIS icin ESC tusuna basiniz %9c",duzhat,duzhat);
    	printf("\n%35c %46c",duzhat,duzhat);
    	printf("\n%35c %46c",duzhat,duzhat);
    	printf("\n%35c %46c",duzhat,duzhat);
     	printf("\n%35c %46c",duzhat,duzhat);
     	printf("\n%35c %46c",duzhat,duzhat);
    	printf("\n%35c",solaltkenar);
    	for(i=0;i<=45;i++){	
	        printf("%c",tabanhat);
    	}
	    printf("%c",sagaltkenar);
	    
	    cik=getch();
	    
	    if(cik==100 || cik==68){
	    	do{
	    	for(s=1;s<=6;s++){
	       	system("cls");
	    	system("color 57");
	    	printf("\n\n\n\n%30c",solkenar);
	        for(i=0;i<=60;i++){
	         	printf("%c",tabanhat);
         	}
          	printf("%c",sagkenar);
        	printf("\n%30c %61c",duzhat,duzhat);
         	printf("\n%30c %61c",duzhat,duzhat);
        	printf("\n%30c %61c",duzhat,duzhat);
        	printf("\n%30c\t\t\t    SAYI TAHMIN OYUNU %22c",duzhat,duzhat);
        	printf("\n%30c %61c",duzhat,duzhat);
         	printf("\n%30c %61c",duzhat,duzhat);
        	printf("\n%30c %61c",duzhat,duzhat);
        	printf("\n%30c",solaltkenar);
			for(i=0;i<=60;i++){
        		printf("%c",tabanhat);
        	}
	        printf("%c\n\n\n",sagaltkenar);
	            
	        	printf("%41d.sayiyi giriniz:",p+1);
		        scanf("%d",&mevcut[s]);
		        p++;
			}
			printf("\n\n\n\n\t\t\t\t\tGirilan sayilar : %d ",mevcut[1]);
	        printf("%d",mevcut[2]);
         	printf(" %d",mevcut[3]);
         	printf(" %d",mevcut[4]);
          	printf(" %d",mevcut[5]);
        	printf(" %d",mevcut[6]);
        	srand(time(0));
            for(f=1;f<=6;f++){
                sayi[f]= rand() %50 ;
           	}
         	printf("\n\t\t\t\t\tUretilen sayilar : %d",sayi[1]);
        	printf(" %d",sayi[2]);
        	printf(" %d",sayi[3]);
        	printf(" %d",sayi[4]);
        	printf(" %d",sayi[5]);
        	printf(" %d",sayi[6]);
        	
        	for(i=1;i<=6;i++){
        		if(sayi[i]==mevcut[i]){
        			
        		    x++;	
				}	
			}
			printf("\n\t\t\t\t\ttahmin sayisi:%d",x);
			for(u=1;u<=x;u++){
				sonuc=sonuc*10;	
			}
			if(sonuc>=10 && sonuc<=1000000){
				printf("\n\t\t\t\t\ttebrikler! 1 sayi bildiniz. ");
				printf("skorunuz: %d",sonuc);
			
			}
			else if(sonuc==1000000){
				printf("BINGO! Tebrikler! Tum sayilari bildiniz.");
				printf("Skorunuz:%d",sonuc);
			}
			else{
				printf("\n\t\t\t\t\tMalesef hicbir sayi bilmediniz. ");
		    	printf("skorunuz:0");
			}
			p=0;
			printf("\n\t\t\t\t\tYeniden denemek icin bir tusuna basiniz.");
        	cik=getch();
			}
			while(cik==49);
	        break;
		}
        }
    	while(cik!=27);
    	
    	printf("\n\n\nCikmak istediginizden emin misiniz? (E/H)");
     	E=getch();
     	
     	
    	}
	    while(E!=69 && E!=101);
	    system("cls");
	    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t cikis saglandi.");
	    printf("\n\t\t\t\t\t\t oyuna donmek icin 2 bas.");
	    q=getch();
     	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
     	system("cls");
    	
	}
	while(q==50);
	    return 0; 
}
