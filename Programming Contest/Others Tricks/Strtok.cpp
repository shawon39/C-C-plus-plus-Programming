#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main () {
   char str[80] = "This is - www.tutorialspoint.com - website website website website";
   char s[2] = " ";
   char *token;

   /* get the first token */
   token = strtok(str, s);
   //cout << token;

   /* walk through other tokens */
   while( token != NULL ) {
      //printf( "%s\n", token );

      token = strtok(NULL, s);
      cout << token<<endl;

   }


   return(0);
}
