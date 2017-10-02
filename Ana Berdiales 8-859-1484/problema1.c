#include<stdio.h>
#define LIBRA 1.31271
#define PESOS 17.7022482
#define EURO 1.20437
#define YEN 0.009281
void main ()
{
    float val, mult=0;
    int menu;
    printf("Introduzca un valor a convertir\n");
    scanf("%f", &val);
	printf(" 1 Para libra esterlina \n 2 Para yen japones \n 3 Para Euro \n 4 Para Pesos mexicanos \n");
    scanf(" %d", &menu);
   	switch(menu)
    {
     case 1:
          mult=val*LIBRA;
          printf("El valor es: %f", mult);
          break;
     case 2:
          mult=val*YEN;
          printf("El valor es: %f", mult);
          break;
     case 3:
          mult=val*EURO;
          printf("El valor es: %f", mult);
          break;
     case 4:
          mult=val*PESOS;
          printf("El valor es: %f", mult);
          break;
    }
}
     
     
     

