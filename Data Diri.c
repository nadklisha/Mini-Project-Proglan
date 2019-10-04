#include <stdio.h>




int main(){
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
