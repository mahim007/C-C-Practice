#include<stdio.h>
main( )
{
int let, dig, other;
char c;
let = dig = other = 0;
while( (c=getchar( )) != '\0' )
if( ('A'<=c && c<='Z') || ('a'<=c && c<='z') )
++let;
else if( '0'<=c && c<='9' ) ++dig;
else
++other;
printf("%d letters, %d digits, %d others\n", let, dig, other);
return 0;
}
