#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include "Rumus.h"

void data_diri();
int pph();
void pbb();
void ppnbm();
void ppn();
int pkb();
void phr();
int pht();




int main(){
	system("Color 70");
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
		printf("\n9. Exit");
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
	scanf("%s");
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
	system("cls");
	return;
}

void ppnbm(){
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




void phr(){
	int peng;
	char photelr[50];
	
	printf("Menghitung PPn\n\n\n");
	printf("Pajak Hotel dan Restauran adalah Pajak yang dibayar 10 persen dari pengeluaran\n");
	printf("Masukan pengeluaran : ");
	scanf("%d", &peng);
	peng = peng*0.1+peng;
	gets(photelr);

	printf("\nBayar Pajak Hotel dan Restaurant : %d\n", peng);
	system("pause");
	system("cls");
	return;
}

void pbb(){
	int bangunan;
	int tanah;
	int nilai_tanah;
	int nilai_bangunan;
	int njop;
	int njkp;
	int pajakbb;
	char pbumib[50];
	
	printf("Menghitung PBB\n\n\n");

	printf("\nMasukan luas bangunan : ");
	scanf("%d", &bangunan);
	printf("\nNilai Bangunan : ");
	scanf("%d", &nilai_bangunan);
	printf("\nMasukan luas tanah : ");
	scanf("%d", &tanah);
	printf("\nMasukan Nilai Tanah : ");
	scanf("%d", &nilai_tanah);
	
	njop = (bangunan*nilai_bangunan)+(tanah*nilai_tanah);
	njkp = 0.2*njop;
	pajakbb = 0.005*njkp;
	gets(pbumib);

	
	printf("Pajak yang dibayarkan : %d", pajakbb);
	
	system("pause");
	system("cls");
	return;
}

int pkb(){
	
	int jum_kend,njk;
	
	float p1 = 0.015;
	float p2 = 0.02;
	float p3 = 0.025;
	float p4 = 0.04;
	
	printf("Jumlah kendaraan : ");
	scanf("%d", &jum_kend);
	njk = 500000 *2/3 * 100;
	printf("Nilai jual kendaraan : %d\n", njk);
	int j1 = njk * p1;
	int j2 = njk * p2;
	int j3 = njk * p3;
	int j4 = njk * p4;
	
	if(jum_kend==1){
		printf("PKB kendaraan :Rp.\t%d\n", j1);
	}
		if(jum_kend==2){
		printf("PKB kendaraan pertama :Rp.\t%d\n", j1);
		printf("PKB kendaraan kedua : Rp.\t%d\n", j2);
	}
		if(jum_kend==3){
		printf("PKB kendaraan pertama :Rp.\t%d\n", j1);
		printf("PKB kendaraan kedua : Rp.\t%d\n", j2);
		printf("PKB kendaraan ketiga : Rp.\t%d\n", j3);
	}
	if(jum_kend>=4){
		printf("PKB kendaraan pertama :Rp.\t%d\n", j1);
		printf("PKB kendaraan kedua : Rp.\t%d\n", j2);
		printf("PKB kendaraan ketiga : Rp.\t%d\n", j3);
		printf("PKB kendaraan keempat : Rp.\t%d\n", j4);

}
system("pause");
system("cls");
return;
}

int pph(){
	int tahunan,ptkp1,ptkp2,ptkp3,gaji,bersih;
	char istri,anak;
	ptkp1 = 54000000;
	ptkp2 = 4500000;
	ptkp3 = 4500000;
	
	printf("Berapakah gaji perbulan anda?\n");
	scanf("%d", &gaji);
	printf("apakah anda sudah menikah?(Yes/No)\n");
	scanf("%s", &istri);
	printf("Berapakah jumlah anak anda?\n");
	scanf("%d", &anak);
	tahunan = gaji*12;

	if(istri == "Yes" && anak == 1){
		bersih = (ptkp1 + ptkp2 + ptkp3)-tahunan;
	if(istri == "Yes" && anak == 2){
	bersih = (ptkp1 - ptkp2 -(ptkp3*2))-tahunan;
	}
	if(istri =="Yes" && anak > 3){
		bersih = (ptkp1 - ptkp2 -(ptkp3*3))-tahunan;
	if(istri == "No"){
		bersih = (ptkp1 - ptkp2)-tahunan;}}}
	
	
	
	int f1 = bersih * 0.05;
	int f2 = bersih * 0.15;
	int f3 = bersih * 0.25;
	int f4 = bersih * 0.5; 
	if(50000000>tahunan){
	printf("PPH anda : Rp.\t%d\n",f1);
	if(50000000<tahunan<250000000){
	printf("PPH anda : Rp.\t%d\n",f2);
	if(250000000<tahunan<500000000){
	printf("PPH anda : Rp.\t%d\n",f3);
	if(tahunan>500000000){
	printf("PPH anda : Rp.\t%d\n",f4);
	}}}}
	printf("Gaji tahunan anda : Rp.\t%d\n", tahunan);
	printf("Gaji bersih anda : Rp.\t%d\n", bersih);
	
	system("pause");
	system("cls");
	return;
}



int pht(){
	int nominal;
	
	printf("Berapakah harga penginapan dalam 1 tahun terakhir?\n");
	scanf("%d", &nominal);
	printf("PHT yang harus dibayarkan : Rp.\t%d\n", nominal*1.1);
	system("pause");
	system("cls");
	return;
}
