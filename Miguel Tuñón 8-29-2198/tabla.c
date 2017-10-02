#include<stdio.h>
void main ()
{
	int n;
	int resp=0;
	
	printf("Introduzca el numero a multiplicar\n");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			resp=n*1;
				printf("El valor es:%d\n",resp);
			resp=n*2;
				printf("El valor es:%d\n",resp);
			resp=n*3;
				printf("El valor es:%d\n",resp);
			resp=n*4;
				printf("El valor es:%d\n",resp);
			resp=n*5;
				printf("El valor es:%d\n",resp);
			resp=n*6;
				printf("El valor es:%d\n",resp);
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
			    printf("El valor es:%d\n",resp); 
			break;
		case 2:
			resp=n*2;
				printf("El valor es:%d\n",resp);
			resp=n*3;
				printf("El valor es:%d\n",resp);
			resp=n*4;
				printf("El valor es:%d\n",resp);
			resp=n*5;
				printf("El valor es:%d\n",resp);
			resp=n*6;
				printf("El valor es:%d\n",resp);
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		case 3:
			resp=n*3;
				printf("El valor es:%d\n",resp);
			resp=n*4;
				printf("El valor es:%d\n",resp);
			resp=n*5;
				printf("El valor es:%d\n",resp);
			resp=n*6;
				printf("El valor es:%d\n",resp);
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		case 4:
			resp=n*4;
				printf("El valor es:%d\n",resp);
			resp=n*5;
				printf("El valor es:%d\n",resp);
			resp=n*6;
				printf("El valor es:%d\n",resp);
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		case 5:
			resp=n*5;
				printf("El valor es:%d\n",resp);
			resp=n*6;
				printf("El valor es:%d\n",resp);
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		case 6:
			resp=n*6;
				printf("El valor es:%d\n",resp);
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		case 7:
			resp=n*7;
				printf("El valor es:%d\n",resp);
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		case 8:
			resp=n*8;
				printf("El valor es:%d\n",resp);
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break; 
		case 9:
			resp=n*9;
				printf("El valor es:%d\n",resp); 
			break;
		default:
			printf("No valido");
	}
}
