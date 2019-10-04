#include <stdio.h>
#include <math.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

void data_diri();
void pph();
void pbb();
void ppnbm();
void ppn();
void pkb();
void phr();
void pht();
void hasil_akhir();
void gaji_tahun();


int main(){
	system("Color 30");
	mulai();
	return 0;
}

void mulai(){
		printf("\t\t\t-----------Penghitung Pajak Perseorangan-----------\n");
		printf("\t\t\t      Mini Project\n");
		printf("\t\t\t    Pemograman Lanjut - 01 \n");
		menu();
}

void menu(){
	int option,exit=0;	
	while (1){
		system("cls");
	printf("\t\t\t-----------Penghitung Pajak Perseorangan-----------\n");
		printf("\t\t\t             Mini Project\n");
		printf("\t\t\t        Pemograman Lanjut - 01 \n");
		printf("\nSilahkan memilih menu yang diinginkan");
		printf("\n1. Masukan Data Diri");
		printf("\n2. Menghitung PPh ");
		printf("\n3. Menghitung PPn");
		printf("\n4. Menghitung PPnBM");
		printf("\n5. Menghitung PBB");
		printf("\n6. Menghitung Pajak Kendaraan Bermotor");
		printf("\n7. Menhitung Pajak Restoran dan Hotel");
		printf("\n8. Menghitung Pajak Hiburan dan Tonton");
		printf("\n9. Hasil Akhir Pajak yang dibayarkan");
		printf("\n10. Exit");
		printf("\n\n\n Enter Number: \n");
		scanf("%d", &option);
		system("cls");
		switch(option){
			case 1:
			data_diri();
			break;
			
			case 2:
			pph();
			break;
			
			case 3:
			ppn();
			break;
			
			case 4:
			ppnbm();
			break;
			
			case 5:
			pbb();
			break;
			
			case 6:
			pkb();
			break;
			
			case 7:
			phr();
			break;
			
			case 8:
			pht();
			break;
			
			case 9:
			hasil_akhir();
			break;
				
			case 10:
				printf("Thank You");
				exit=1;
			break;
			
			default:
	            printf("\nEnter 1 to 9 only\n\n");
	            system("pause");
	            system("cls");
	        break;
		}
		if(exit==1) break;
	}
	return;
}

void data_diri(){
	char nama[50];
	char anak[10];
	char istri[10];
	char jum_bar_mew[10];
	char gaji[50];
	char npwp[50];
	char ktp[50];
	char jum_kend[50];
	char luas_tanah[50];
	char luas_bangunan[50];
	char gender[10];
	
	printf("Masukan data diri untuk menghitung pajak perseorangan\n\n\n\n");
	printf("\nNama Lengkap : ");
	gets(nama);
	printf("\nJenis Kelamin : ");
	gets(gender);
	printf("\nNo. KTP : ");
	gets(ktp);
	printf("\nNo. NPWP : ");
	gets(npwp);
	printf("Gaji per Tahun : ");
	gets(gaji);
	printf("\nStatus Pernikahan (Yes=Menikah) : ");
	gets(istri);
	printf("\nJumlah Anak : ");
	gets(anak);
	printf("\nJumlah Kendaraan : ");
	gets(jum_kend);
	printf("\nTotal Barang Mewah :");
	gets(jum_bar_mew);
	printf("\nLuas Total Tanah : ");
	gets(luas_tanah);
	printf("\nLuas Bangunan : ");
	gets(luas_bangunan);
	
system("pause");
system("cls");
return;
}

void gaji_tahun(int gaji){
	return gaji*12;
}
	
void ppn(){
	int peng;
	char pajakpn[50];
	
	printf("Menghitung PPn\n\n\n");
	printf("PPn adalah Pajak yang dibayar 10 persen dari pengeluaran\n");
	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	if(peng>5000000){
		peng = peng*0.1;
		gets(pajakpn);
	}
	else{
		peng=0;
		}
	
	printf("\nBayar PPn : %d\n", peng);
	system("pause");
	return;
}
