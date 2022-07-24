/*  Program treba ispisat dvostruko invertiranu piramidu pomocu  for petlje.  */

#include<stdio.h>

int main() {
   int i, j, k;
   int prazno = 0;
   int linije = 6;
   char simbol = 'A';
   int privremena;
   int polje[7] = { 0, 1, 3, 5, 7, 9, 11 };
   k = 0;
   //korak 0

   for (i = linije; i >= 0; i--) {
      printf("\n");
      simbol = 'A';

      //korak 1
      for (j = i; j >= 0; j--) {
         printf("%c\t", simbol++);
      }

      //korak 2
      prazno = polje[k++];

      //korak 3 - Double space
      for (j = 0; j < prazno; j++) {
         printf("\t");
      }

      simbol = 'F' - (prazno / 2);

      if (prazno == 0) {
         privremena = i - 1;
      } else {
         privremena = i;
      }

      for (j = 0; j <= privremena; j++) { //korak 4
         printf("%c\t", simbol--);
      }

   }
   return (0);
}
