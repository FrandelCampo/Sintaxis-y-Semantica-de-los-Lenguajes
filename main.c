//Francisco del Campo Kenny
#include<ctype.h>
#include <stdio.h>

int main()
{
 
 int caracter;
 while(EOF != (caracter = getchar()))
 {
   if(!isdigit(caracter))
   {
   if(islower(caracter))
   {
     caracter = toupper(caracter);
   }
   else if(isupper(caracter))
   {
     caracter = tolower(caracter);
   }
  putchar(caracter);
   }
}
return 0;
 }