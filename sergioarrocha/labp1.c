#include<stdio.h>

void main(){
	int num,resul1,resul2,resul3,resul4,resul5,resul6,resul7,resul8,resul9;
	int resul=0;
	int tabla;
	
	printf("inserte un numero para iniciar la tabla del 1 al 9 \n");
	 scanf("%d",&tabla);
	 
	  switch (tabla)
	  {
	  	case 1:
	  		  resul1= 1*tabla;
			  resul2= 2*tabla;
			  resul3= 3*tabla;
			  resul4= 4*tabla;
			  resul5= 5*tabla;
			  resul6= 6*tabla;
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  		
	  		printf("1x1=%d\n",resul1);
	  		printf("1x2=%d\n",resul2);
	  		printf("1x3=%d\n",resul3);
	  		printf("1x4=%d\n",resul4);
	  		printf("1x5=%d\n",resul5);
	  		printf("1x6=%d\n",resul6);
	  		printf("1x7=%d\n",resul7);
	  		printf("1x8=%d\n",resul8);
	  		printf("1x9=%d\n",resul9);
	  		break;
	  			case 2:
	  	
			  resul2= 2*tabla;
			  resul3= 3*tabla;
			  resul4= 4*tabla;
			  resul5= 5*tabla;
			  resul6= 6*tabla;
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  		
	  	
	  		printf("2x2=%d\n",resul2);
	  		printf("2x3=%d\n",resul3);
	  		printf("2x4=%d\n",resul4);
	  		printf("2x5=%d\n",resul5);
	  		printf("2x6=%d\n",resul6);
	  		printf("2x7=%d\n",resul7);
	  		printf("2x8=%d\n",resul8);
	  		printf("2x9=%d\n",resul9);
	  		 break;
	  		 	case 3 :
	
			  resul3= 3*tabla;
			  resul4= 4*tabla;
			  resul5= 5*tabla;
			  resul6= 6*tabla;
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  	
	  		printf("3x3=%d\n",resul3);
	  		printf("3x4=%d\n",resul4);
	  		printf("3x5=%d\n",resul5);
	  		printf("3x6=%d\n",resul6);
	  		printf("3x7=%d\n",resul7);
	  		printf("3x8=%d\n",resul8);
	  		printf("3x9=%d\n",resul9);
	  		break;
	  			case 4:
	  	
			  resul4= 4*tabla;
			  resul5= 5*tabla;
			  resul6= 6*tabla;
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  		
	  	
	  		printf("4x4=%d\n",resul4);
	  		printf("4x5=%d\n",resul5);
	  		printf("4x6=%d\n",resul6);
	  		printf("4x7=%d\n",resul7);
	  		printf("4x8=%d\n",resul8);
	  		printf("4x9=%d\n",resul9);
	  		break;
	  		 
	  		 	case 5:
	  		
			  resul5= 5*tabla;
			  resul6= 6*tabla;
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  		
	  	
	  		printf("5x5=%d\n",resul5);
	  		printf("5x6=%d\n",resul6);
	  		printf("5x7=%d\n",resul7);
	  		printf("5x8=%d\n",resul8);
	  		printf("5x9=%d\n",resul9);
	  		break;
	  		case 6:
	  	
			  resul6= 6*tabla;
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  	
	  		
	  		printf("6x6=%d\n",resul6);
	  		printf("6x7=%d\n",resul7);
	  		printf("6x8=%d\n",resul8);
	  		printf("6x9=%d\n",resul9);
	  		break;
			  case 7:
	  		
			  resul7= 7*tabla;
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  		
	  		printf("7x7=%d\n",resul7);
	  		printf("7x8=%d\n",resul8);
	  		printf("7x9=%d\n",resul9);
	  		break;
	  		 case 8:
	  		 	
			  resul8= 8*tabla;
			  resul9= 9*tabla;
	  	
	  		printf("8x8=%d\n",resul8);
	  		printf("8x9=%d\n",resul9);
	  		break;
	  		case 9:
		
			  
			  resul9= 9*tabla;
	  	
	  		
	  		printf("9x9=%d\n",resul9);
	  		break;
	  		
	  		default:
			  printf("la tabla no soporta");
	  		
	  		
	  		
	  		

	  		
	  	
	  }
}

