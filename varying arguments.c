# include <stdio.h>
# include <stdarg.h>
int findmax ( int, … ) ;
int main( )
{
int max ;
max = findmax ( 5, 23, 15, 1, 92, 50 ) ;
printf ( "maximum = %d\n", max ) ;
max = findmax ( 3, 100, 300, 29 ) ;
printf ( "maximum = %d\n", max ) ;
return 0 ;
}
int findmax ( int tot_num, … )
{
int max, count, num ;
va_list ptr ;
466 Let Us C
va_start ( ptr, tot_num ) ;
max = va_arg ( ptr, int ) ;
for ( count = 1 ; count < tot_num ; count++ )
{
num = va_arg ( ptr, int ) ;
if ( num > max )
max = num ;
}
return ( max ) ;
}
