#include <stdio.h>
#include <conio.h>
void main()
{ int A[3][4], B[3][4], X[3][4], i, j;
clrscr();
printf ("Perkalian Matriks (Ordo 2x2)\n");
printf ("----------------------------\n\n");
/******* Masukkan matriks A *******/
printf("Penetapan Nilai Matriks A\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("Baris ke  %i, Kolom ke  %i : ",i+1,j+1);
fflush(stdin);scanf("%i",&A[i][j]);
}
}
printf("\n");
/******** Masukkan matriks B ********/
printf("Penetapan Nilai Matriks B\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ printf("Baris ke  %i, Kolom ke  %i : ",i+1,j+1);
fflush(stdin);scanf("%i",&B[i][j]);
}
}
/******** Proses perkalian matriks A dan B ********/
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
{ X[i][j]=(A[i][0]*B[0][j])+(A[i][1]*B[1][j]);
}
}
/******** Cetak hasil perkalian matriks A dan B *******/
printf("\nHasil perkalian matriks A dan B\n");
printf("\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
printf("%6i",X[i][j]);printf("\n");
}
printf("\n\n");
getch();
} 
