#include <stdio.h>
#include <math.h>

int main(){
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
	return;
}
