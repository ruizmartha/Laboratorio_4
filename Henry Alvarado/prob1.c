#include<stdio.h>

void main(){
	float a,c;
	int b;
	printf("Por favor, Introduzca la candidad de dolares\n");
	scanf("%f",&a);
	printf("Introducir un numero\n1.Libra esterlina\n2.Pesos mexicanos\n3.Euro\n4.Yen Japones\n");
	scanf("%d",&b);
	
	switch(b){
		case 1:
			c=1.31271*a;
			printf("La cantidad de libra que tiene es\n%.3f",c);
			break;
		case 2:
			c=17.7022482*a;
			printf("La cantidad de Pesos que tiene es\n%.3f",c);
			break;
		case 3:
			c=1.20437*a;
			printf("La cantidad de Euros que tiene es\n%.3f",c);
			break;
		case 4:
			c=0.009281*a;
			printf("La cantidad de Yen Japones que tiene es\n%.3f",c);
			break;
		default:
		printf("no valido");
	}
}
