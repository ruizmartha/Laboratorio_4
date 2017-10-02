#include<stdio.h>
void main ()
{
	int op, mult1, mult2, mult3, mult4,mult5, mult6, mult7, mult8;
	printf("Introduzca un valor a multiplicar del 2 al 9\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			
			mult1=op*2;
			mult2=op*3;
			mult3=op*4;
			mult4=op*5;
			mult5=op*6;
			mult6=op*7;
			mult7=op*8;
			mult8=op*9;
			printf("2X2: %d", mult1);
			printf("2X3: %d", mult2);
			printf("2X4: %d", mult3);
			printf("2X5: %d", mult4);
			printf("2X6: %d", mult5);
			printf("2X7: %d", mult6);
			printf("2X8: %d", mult7);
			printf("2X9: %d", mult8);
			break;
			
		case 2:
			mult1=op*2;
			mult2=op*3;
			mult3=op*4;
			mult4=op*5;
			mult5=op*6;
			mult6=op*7;
			mult7=op*8;
			mult8=op*9;
			printf("3X3: %d", mult1);
			printf("3X4: %d", mult2);
			printf("3X5: %d", mult3);
			printf("3X6: %d", mult4);
			printf("3X7: %d", mult5);
			printf("3X8: %d", mult6);
			printf("3X9: %d", mult7);
			printf("3X9: %d", mult8);
			break;
			
	}
}

