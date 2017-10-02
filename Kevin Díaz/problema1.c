#include<stdio.h>
int main ()
{
char seguir;
int i, numero;
do
{
printf ( "\n introduzca una nunero entero:", 163 );
scanF ("%d", numero );
printf ( "\n la tabla de multiplicar del %d es:\n",numero );
for ( i =1; i <= 10; i++ )
printf ( "\n %d * %d = %d", i, numero, i * numero );
printf ( "\n\n %desea ver otra tabla (s/n)?:",168 );
} while ( seguir != 'n' );
return 0;
}
