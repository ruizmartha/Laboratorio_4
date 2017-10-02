#include<stdio.h>
void main(){
	float tem,c,f,k;
	int op;
	char nom[1];
	printf("introduzca el valor de la temperatura");
	scanf("%f",tem);
	printf("introduzca la letra que representa");
	scanf("%s",nom);
	
	switch(op)
	{
		case 1:
			c=5(f-32)/9;
			printf("el valor en celsius es: %f \n",c);
			
	   case 2:
	   	f=((9*c)/5)+32;
	   	printf("el valor en farenheit es: %f \n",f);
	   	
	   	case 3:
	   		c=k-273.15;
	   		printf("el valor en celsium es : %f \n",c);
	   		
	   	case 4:
	   		k=c+273.15;
	   		printf("el caloren kelvin es: %f \n",k);
	   		
	   	case 5:
	   		
			
	}
	
	
}
