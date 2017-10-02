#include<stdio.h>

void main(){
	
	int num, resp, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9;
printf("Introduzca un valor \n");
scanf("%d", &num);
printf("\n\n");

printf("Su tabla es: \n");
switch(num){
	case 1:
	resp=num*1;
	resp2=num*2;
	resp3=num*3;
	resp4=num*4;
	resp5=num*5;
	resp6=num*6;
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	printf("1x1= %d\n", resp);
	printf("1x2= %d\n",resp2);
	printf("1x3= %d\n",resp3);
	printf("1x4= %d\n",resp4);
	printf("1x5= %d\n",resp5);
	printf("1x6= %d\n",resp6);
	printf("1x7= %d\n",resp7);
	printf("1x8= %d\n",resp8);
	printf("1x9= %d\n",resp9);
	break;
		case 2:
	resp2=num*2;
	resp3=num*3;
	resp4=num*4;
	resp5=num*5;
	resp6=num*6;
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	printf("2x2= %d\n",resp2);
	printf("2x3= %d\n",resp3);
	printf("2x4= %d\n",resp4);
	printf("2x5= %d\n",resp5);
	printf("2x6= %d\n",resp6);
	printf("2x7= %d\n",resp7);
	printf("2x8= %d\n",resp8);
	printf("2x9= %d\n",resp9);
	break;
		case 3:
	resp3=num*3;
	resp4=num*4;
	resp5=num*5;
	resp6=num*6;
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	printf("3x3= %d\n",resp3);
	printf("3x4= %d\n",resp4);
	printf("3x5= %d\n",resp5);
	printf("3x6= %d\n",resp6);
	printf("3x7= %d\n",resp7);
	printf("3x8= %d\n",resp8);
	printf("3x9= %d\n",resp9);
	break;
		case 4:
	resp4=num*4;
	resp5=num*5;
	resp6=num*6;
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	
	printf("4x4= %d\n",resp4);
	printf("4x5= %d\n",resp5);
	printf("4x6= %d\n",resp6);
	printf("4x7= %d\n",resp7);
	printf("4x8= %d\n",resp8);
	printf("4x9= %d\n",resp9);
	break;
		case 5:
	resp5=num*5;
	resp6=num*6;
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	printf("5x5= %d\n",resp5);
	printf("5x6= %d\n",resp6);
	printf("5x7= %d\n",resp7);
	printf("5x8= %d\n",resp8);
	printf("5x9= %d\n",resp9);
	break;
		case 6:
	resp6=num*6;
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	printf("6x6= %d\n",resp6);
	printf("6x7= %d\n",resp7);
	printf("6x8= %d\n",resp8);
	printf("6x9= %d\n",resp9);
	break;
		case 7:
	resp7=num*7;
	resp8=num*8;
	resp9=num*9;
	printf("7x7= %d\n",resp7);
	printf("7x8= %d\n",resp8);
	printf("7x9= %d\n",resp9);
	break;
		case 8:
	resp8=num*8;
	resp9=num*9;
	printf("8x8= %d\n",resp8);
	printf("8x9= %d\n",resp9);
	break;
		case 9:
	resp9=num*9;
	printf("9x9= %d\n",resp9);
	break;
	default:
		printf("Tabla no soportada");
}

}
