//ESERCIZIO
//INSERIRE DA LINEA DI COMANDO UNA STRINGA DI NUMERI SENZA SPAZI
//ORDINARE I NUMERI IN UN ARRAY E STAMPARLI

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;

  printf("numero elementi %d\n",argc);
  for(i=0;i<argc;i++)
    printf("n. %d\tval: %s\t\n",i,argv[i]);
}

