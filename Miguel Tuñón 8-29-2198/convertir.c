#include<stdio.h>
#define LE 1.31271
#define PM 17.7022482
#define ER 1.20437
#define JP 0.009281
void main ()
{
	float resp=0;
	float d;
	int m;
	
	printf("Itroduzca la cantidad de dolares\n"),
	scanf("%f",&d);
	printf("Presione 1 si quiere convertir a libra esterlina.\n");
	printf("Presione 2 si quiere convertir a japones.\n");
	printf("Presione 3 si quiere convertir a euro.\n");
	printf("Presione 4 si quiere convertir a pesos mexicanos.\n");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			resp=LE*d;
			printf("La cantidad convertida es:%.2f",resp);
		break;
		case 2:
			resp=PM*d;
			printf("La cantidad convertida es:%.2f",resp);
		break;
		case 3:
			resp=ER*d;
			printf("La cantidad convertida es:%.2f",resp);
		break;
		case 4:
			resp=JP*d;
			printf(" la cantidad convertida es:%.2f",resp);
		break;
		default:
			printf("No valido");
	}
	
}
