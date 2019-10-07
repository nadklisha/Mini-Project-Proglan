#ifndef random_H
#define random_H

void gaji_tahun(int gaji){
	int tot;
	tot = gaji*12;
	return tot;
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

#endif
