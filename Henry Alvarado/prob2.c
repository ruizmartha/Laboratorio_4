#include<stdio.h>

void main(){
	int opc,r=0,x;
	int r2,r3,r4,r5,r6,r7,r8,r9;
	printf("Por favor, Introduzca un numero del 1 al 9 \n");
	scanf("%d",&opc);
	
	switch(opc){
		case 1:
			r=opc*1;
			r2=opc*2;
			r3=opc*3;
			r4=opc*4;
			r5=opc*5;
			r6=opc*6;
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,1,r);
			printf("	%d x %d = %d\n",opc,2,r2);
			printf("	%d x %d = %d\n",opc,3,r3);
			printf("	%d x %d = %d\n",opc,4,r4);
			printf("	%d x %d = %d\n",opc,5,r5);
			printf("	%d x %d = %d\n",opc,6,r6);
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 2:
			r2=opc*2;
			r3=opc*3;
			r4=opc*4;
			r5=opc*5;
			r6=opc*6;
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,2,r2);
			printf("	%d x %d = %d\n",opc,3,r3);
			printf("	%d x %d = %d\n",opc,4,r4);
			printf("	%d x %d = %d\n",opc,5,r5);
			printf("	%d x %d = %d\n",opc,6,r6);
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 3:
			r3=opc*3;
			r4=opc*4;
			r5=opc*5;
			r6=opc*6;
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,3,r3);
			printf("	%d x %d = %d\n",opc,4,r4);
			printf("	%d x %d = %d\n",opc,5,r5);
			printf("	%d x %d = %d\n",opc,6,r6);
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 4:
			r4=opc*4;
			r5=opc*5;
			r6=opc*6;
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,4,r4);
			printf("	%d x %d = %d\n",opc,5,r5);
			printf("	%d x %d = %d\n",opc,6,r6);
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 5:
			r5=opc*5;
			r6=opc*6;
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,5,r5);
			printf("	%d x %d = %d\n",opc,6,r6);
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 6:
			r6=opc*6;
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,6,r6);
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 7:
			r7=opc*7;
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,7,r7);
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 8:
			r8=opc*8;
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,8,r8);
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		case 9:
			r9=opc*9;
			printf("	%d x %d = %d\n",opc,9,r9);
		break;
		default:
			printf("Numero no valido");
	} 
}
