#include <stdio.h>
void main () {
	float val, fa, ce, ke;
	char op;
	printf("introduzca el valor:\n");
	scanf("%f", &val);
	printf("Si es Celsius introduzca C\n");
	printf("Si es Farenhait introduzca F\n");
	printf("Si es Kelvin introduzca K\n");
	scanf(" %c", &op);
	switch (op)
	{
		case 'c':
		case 'C':
			fa=((9*val)/5)+32;
			ke=val+273.15;
			printf("El valor en Celsius es: %.2f\n", val);
			printf("El valor en Farenhait es: %.2f\n", fa);
			printf("El valor en Kelvin es: %.2f\n", ke);
			break;
		case 'F':
		case 'f':
			ce=(5*(val-32))/9;
			ke=((5*(val-32))/9)+273.15;
			printf("El valor en farenhait es: %.2f\n", val);
			printf("El valor en Celsius es: %.2f\n", fa);
			printf("El valor en Kelvin es: %.2f\n", ke);
			break;
		case 'K':
		case 'k':
			ce=val-273.15;
			fa=((9*(val-273.15))/5)+32;
			printf("El valor en Kelvin es: %.2f\n", val);
			printf("El valor en Celsius es: %.2f\n", ce);
			printf("El valor es Farenhait es: %.2f\n", fa);
			break;
		default:
			printf("LA LETRA NO ES VALIDA");
	}
	
}
