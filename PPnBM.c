#include <stdio.h>
#include <math.h>

int main(){

int options;
		system("cls");
		printf("Perhitungan PPnBM\n");
		printf("Choose one of these options\n");
	while(1){
		printf("\n\n1. 10 Persen");
		printf("\n2. 20 Persen");
		printf("\n3. 25 Persen");
		printf("\n4. 35 Persen");
		printf("\n5. Back to main menu");
		printf("\n\n\nEnter Number : ");
		scanf("%d", &options);
		system("cls");
		switch(options){
			case 1:
				sepuluh();
			break;
			case 2:
				duapuluh();
			break;
			case 3:
				dualima();
			break;
			case 4:
				tigalima();
			break;
			case 5:
				return;
			break;
			default:
				printf("\nEnter 1 to 5 only\n\n");
				system("pause");
		        system("cls");
		    break;
		}
	}
}


void sepuluh(){
	int peng;
	char pajakpnbm[50];
	
	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	if(peng>5000000){
		peng = peng-peng*0.1;
		gets(pajakpnbm);
	}
	else{
		peng=0;
		}
	
	printf("\nBayar PPn : %d\n", peng);
	system("pause");
	system("cls");
	return;
}

void duapuluh(){
	int peng;
	int total;
	int pajakpnbm;
	char ppengnbm[50];

	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	if(peng>5000000){
		pajakpnbm = 0.1*(peng-(peng*0.2));
	}
	else{
		peng=0;
		}
	
	total = peng+pajakpnbm;
	gets(ppengnbm);
	
	printf("\nBayar PPn+PPnBm : %d\n", total);
	system("pause");
	system("cls");
	return;
}

void dualima(){
		int peng;
	int total;
	int pajakpnbm;
	char ppengnbm[50];

	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	if(peng>5000000){
		pajakpnbm = 0.1*(peng-(peng*0.25));
	}
	else{
		peng=0;
		}
	
	total = peng+pajakpnbm;
	gets(ppengnbm);
	
	printf("\nBayar PPn+PPnBm : %d\n", total);
	system("pause");
	system("cls");
	return;
}

void tigalima(){
		int peng;
	int total;
	int pajakpnbm;
	char ppengnbm[50];

	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	if(peng>5000000){
		pajakpnbm = 0.1*(peng-(peng*0.35));
	}
	else{
		peng=0;
		}
	
	total = peng+pajakpnbm;
	gets(ppengnbm);
	
	printf("\nBayar PPn+PPnBm : %d\n", total);
	system("pause");
	system("cls");
	return;
}

