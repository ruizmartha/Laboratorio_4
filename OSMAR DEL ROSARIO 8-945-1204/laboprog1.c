#include<stdio.h>
#include<math.h>
#define LIBRA 1.31271
#define PESOS 17.7022482
#define EURO 1.20437
#define YEN 0.009281
void main(){

float resp=0, dolar;
int opc;
printf("Introduzca un valor en dolar \n");
scanf("%f", &dolar);
printf("Introduzca el numero de su opcion \n");
scanf("%d", &opc);

switch (opc){
	case 1:
	resp=LIBRA*dolar;
	printf("Su cantidad en libras es: %f", resp);
	break;
		case 2:
	resp=PESOS*dolar;
	printf("Su cantidad en pesos es: %f", resp);
	break;
		case 3:
	resp=EURO*dolar;
	printf("Su cantidad en euro es: %f", resp);
	break;
		case 4:
	resp=YEN*dolar;
	printf("Su cantidad en yen es: %f", resp);
	break;
	default:
		printf("No valido");
}

}
