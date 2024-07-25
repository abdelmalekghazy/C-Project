#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int bakiye=1000,cekme,kalan;
	int islem;
     system("color b9");
	string pin = "1234";
	string sifre;
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
	cout << "\t\t\t\t\tLutfen sifrenizi giriniz:";
	cin >> sifre;
	system("cls");
	if (pin == sifre){  
		cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
		cout<<"\t\t\t\t\tSifre dogru\n\n";
		cout<<"\t\t\t\t\tHangi islemi yapmak istiyorsunuz...:\n\n";
		cout<<"\t\t\t\t\t1- Bakiye ogrenme\n\t\t\t\t\t2- Para cekme\n\t\t\t\t\t3- Cikis\n\n";
		cout<<"\t\t\t\t\tLutfen bir islem seciniz:";
		cin>>islem;
		if(islem>0 && islem<4 ){
			switch(islem){
				case 1:
					system("cls");
					cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
					printf("\t\t\t\t\tBakiyenizde %d TL vardir",bakiye);
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				break;
				case 2:
					system("cls");
					cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
					printf("\t\t\t\t\tLutfen cekmek istediginiz tutari giriniz:\t",cekme);
					scanf("%d",&cekme);
					
					if(cekme>0 && cekme<1000){
					  kalan=bakiye-cekme;
					  cout<<"\t\t\t\t\tCekmek istediginiz tutar icin bakiyeniz YETERLIDIR\n";
					  printf("\t\t\t\t\tKALAN BAKIYE: %d TL",kalan);
					  }
					else{
						system("cls");
						system("color 80");
						cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
						printf("\t\t\t\t\tLutfen cekmek istediginiz tutari giriniz:\t%d\n",cekme);
					
						cout<<"\t\t\t\t\tYETERSIZ BAKIYE";
					}	
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				break;	
				case 3:
					system("cls");
					system("color 80");
					cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
					cout<<"\t\t\t\t\tBASARILI BIR SEKILDE CIKIS YAPTINIZ\n\t\t\t\t\t\tYine Bekleriz";
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				break;	
			}		
		}
		else{
			system("cls");
			system("color 80");
			cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
	    	cout<<"\t\t\t\t\tHatali secim!!! Lutfen 1-2 ya da 3 seciniz";
	    
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		}	
	}
	else{
		system("color 80");
		cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tBR BANKASINA HOSGELDINIZ\n\t\t\t\t\t---------------------------------\n";
		cout<<"\t\t\t\t\t\tHATALI SIFRE!!!\n\t\t\t\t\t\tYine bekleriz";
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	}
	return 0;
}
