#include<stdio.h>
#define libra esterlina 1.31271
#define pesos mexicanos 17.7022482
#define euro 1.20437
#define yen japones 0.009281
void main(){
	int a, resp=0;
	int menu;
	printf("introduzca la cantidad en dolar");
	scanf("%d",&a);
	prinft("introduzca una opcion de menu:libra esterlina, pesos mexicanos,euros,yen japones");
	scanf("%d",&menu);
	switch(menu)
	{
		case1:
			resp= a*1.31271
			printf("el valor en libra esterlina es:%d",resp);
			break;
			case2:
				resp= a*17.7022482
				printf("el valor en pesos mexicanos es:%d",resp);
				break;
				case3:
					resp= a*1.20437
					printf("el valor en euro es:%d",resp);
					break;
					case4:
					resp= a*0.0092881
					printf("el valor en yen japones es:%d",resp);
					break;
					default:
						printf("no es valido");					
	}
}
