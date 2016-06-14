#include <stdio.h>
void hitungluassegitiga();
void hitungluaslingkaran();
void hitungkelilinglingkaran();
void hitungluaspersegipanjang();
void hitungluaspersegi();
void main()
{ char pilih;
	clrscr();
	awal:
	printf("\n\n			    MENU PILIHAN : \n");
	printf("			[1] LUAS SEGITINGA\n");
	printf("			[2] LUAS LINGKARAN\n");
	printf("			[3] KELILING LINGKARAN\n");
	printf("			[4] LUAS PERSEGI PANJANG\n");
	printf("			[5] LUAS PERSEGI\n");
	printf("			[6] KELUAR...\n\n");

	printf("			    PILIH MENU : ");
	scanf("%s",&pilih);

	switch(pilih)
	{
		case '1':clrscr();
			 hitungluassegitiga();
			 break;
		case '2':clrscr();
			 hitungluaslingkaran();
			 break;
		case '3':clrscr();
			 hitungkelilinglingkaran();
			 break;
		case '4':clrscr();
			 hitungluaspersegipanjang();
			 break;
		case '5':clrscr();
			 hitungluaspersegi();
		case '6':break;
		default :printf("SALAH PILIH ..........\n");
			 getch();
			 break;
	}
	if (pilih=='1' || pilih =='2' || pilih=='3' || pilih=='4' || pilih=='5') goto awal;
}
void hitungluassegitiga( )
{ float alas,tinggi,luas;
  clrscr();
  printf("\nMASUKAN PANJANG ALAS SEGITIGA =");
  scanf("%f",&alas);
  printf("MASUKAN TINGGI SEGITIGA	=");
  scanf("%f",&tinggi);
  luas =(alas*tinggi)/2.0;
  printf ("LUAS SEGITIGA		=%5.2f \n",luas);
}
void hitungluaslingkaran( )
{ float jari,luas1;
 printf("\nMASUKAN JARI-JARI		=");
 scanf("%f",&jari);
 luas1 =(3.14*jari*jari);
 printf("LUAS LINGKARAN		=%5.2f \n",luas1);
}
void hitungkelilinglingkaran()
{ float jari1,keliling;
  printf("\nMASUKAN JARI-JARI =");
  scanf("%f",&jari1);
  keliling=2*3.14*jari1;
  printf("KELILING LINGKARAN =%f",keliling);

}
void hitungluaspersegipanjang()
{ float p,l,luas;
  printf("\nMASUKAN PANJANG PERSEGI	=");
  scanf("%f",&p);
  printf("\nMASUKAN LEBAR PERSEGI	=");
  scanf("%f",&l);
  luas =(p*l);
  printf("LUAS PERSEGI PANJANG		= %8.2f",luas);
}
void hitungluaspersegi()
{ float sisi,luas;
  printf("\nMASUKAN PANJANG SISI	=");
  scanf("%f",&sisi);
  luas =(sisi*sisi);
  printf("LUAS PERSEGI			= %8.2f",luas);
}