#include <stdio.h>
void main () {
     int num, m1, m2, m3, m4, m5, m6, m7, m8, m9;
     printf("Introuzca un numero entero del 1 al 9\n");
     scanf("%d", &num);
     switch (num)
     {
            case 1:
                 m1=1;
                 m2=2;
                 m3=3;
                 m4=4;
                 m5=5;
                 m6=6;
                 m7=7;
                 m8=8;
                 m9=9;
                 printf("La tabla de multiplicar del 1:\n");
                 printf("1 * 1 = %d\n", m1);
                 printf("1 * 2 = %d\n", m2);
                 printf("1 * 3 = %d\n", m3);
                 printf("1 * 4 = %d\n", m4);
                 printf("1 * 5 = %d\n", m5);
                 printf("1 * 6 = %d\n", m6);
                 printf("1 * 7 = %d\n", m7);
                 printf("1 * 8 = %d\n", m8);
                 printf("1 * 9 = %d\n", m9);
                 break;
            case 2:
                 m2=2*2;
                 m3=2*3;
                 m4=2*4;
                 m5=2*5;
                 m6=2*6;
                 m7=2*7;
                 m8=2*8;
                 m9=2*9;
                 printf("La tabla de multiplicar del 2:\n");
                 printf("2 * 2 = %d\n", m2);
                 printf("2 * 3 = %d\n", m3);
                 printf("2 * 4 = %d\n", m4);
                 printf("2 * 5 = %d\n", m5);
                 printf("2 * 6 = %d\n", m6);
                 printf("2 * 7 = %d\n", m7);
                 printf("2 * 8 = %d\n", m8);
                 printf("2 * 9 = %d\n", m9);
                 break;
            case 3:
            	 m3=3*3;
                 m4=3*4;
                 m5=3*5;
                 m6=3*6;
                 m7=3*7;
                 m8=3*8;
                 m9=3*9;
                 printf("La tabla de multiplicar del 3:\n");
                 printf("3 * 3 = %d\n", m3);
                 printf("3 * 4 = %d\n", m4);
                 printf("3 * 5 = %d\n", m5);
                 printf("3 * 6 = %d\n", m6);
                 printf("3 * 7 = %d\n", m7);
                 printf("3 * 8 = %d\n", m8);
                 printf("3 * 9 = %d\n", m9);
                 break;
            case 4:
            	 m4=4*4;
                 m5=4*5;
                 m6=4*6;
                 m7=4*7;
                 m8=4*8;
                 m9=4*9;
                 printf("La tabla de multiplicar del 4:\n");
                 printf("4 * 4 = %d\n", m4);
                 printf("4 * 5 = %d\n", m5);
                 printf("4 * 6 = %d\n", m6);
                 printf("4 * 7 = %d\n", m7);
                 printf("4 * 8 = %d\n", m8);
                 printf("4 * 9 = %d\n", m9);
                 break;
            case 5:
            	 m5=5*5;
                 m6=5*6;
                 m7=5*7;
                 m8=5*8;
                 m9=5*9;
                 printf("La tabla de multiplicar del 5:\n");
                 printf("5 * 5 = %d\n", m5);
                 printf("5 * 6 = %d\n", m6);
                 printf("5 * 7 = %d\n", m7);
                 printf("5 * 8 = %d\n", m8);
                 printf("5 * 9 = %d\n", m9);
                 break;
            case 6:
            	 m6=6*6;
                 m7=6*7;
                 m8=6*8;
                 m9=6*9;
                 printf("La tabla de multiplicar del 6:\n");
                 printf("6 * 6 = %d\n", m6);
                 printf("6 * 7 = %d\n", m7);
                 printf("6 * 8 = %d\n", m8);
                 printf("6 * 9 = %d\n", m9);
                 break;
            case 7:
            	 m7=7*7;
                 m8=7*8;
                 m9=7*9;
                 printf("La tabla de multiplicar del 7:\n");
                 printf("7 * 7 = %d\n", m7);
                 printf("7 * 8 = %d\n", m8);
                 printf("7 * 9 = %d\n", m9);
                 break;
            case 8:
            	 m8=8*8;
                 m9=8*9;
                 printf("La tabla de multiplicar del 8:\n");
                 printf("8 * 8 = %d\n", m8);
                 printf("8 * 9 = %d\n", m9);
                 break;
            case 9:
            	 m9=9*9;
                 printf("La tabla de multiplicar del 9:\n");
                 printf("8 * 9 = %d\n", m9);
                 break;
            default:
            	printf("TABLA NO SOPORTADA");
}
}
