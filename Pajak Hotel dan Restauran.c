#include <stdio.h>
#include <math.h>

int main(){
	int peng;
	char phr[50];
	
	printf("Menghitung PPn\n\n\n");
	printf("Pajak Hotel dan Restauran adalah Pajak yang dibayar 10 persen dari pengeluaran\n");
	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	peng = peng*0.1+peng;
	gets(phr);

	printf("\nBayar Pajak Hotel dan Restaurant : %d\n", peng);
	system("pause");
	return;
}
