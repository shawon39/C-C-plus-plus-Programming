#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#define debug(x) cout << #x << " = " << (x) << endl

int main ()
{
  char str[80];
  int x=5;
  debug(x);

  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  puts (str);
  return 0;
}
