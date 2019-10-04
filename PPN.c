#include <stdio.h>
#include <math.h>

int main(){
	int peng;
	char ppn[50];
	
	printf("Menghitung PPn\n\n\n");
	printf("PPn adalah Pajak yang dibayar 10 persen dari pengeluaran\n");
	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	if(peng>5000000){
		peng = peng*0.1;
		gets(ppn);
	}
	else{
		peng=0;
		}
	
	printf("\nBayar PPn : %d\n", peng);
	system("pause");
	return;
}
