#include <bits/stdc++.h>
using namespace std;

int main() {

   tuple < int, int, char > t[10];

   for(int i=1; i<=5; i++)
   {
       t[i] = make_tuple(i,i+5,'A'+i);
   }

   for(int i=1; i<=5; i++)
   {
       cout << get<0>(t[i]) << " " << get<1>(t[i]) << " " << get<2>(t[i]) <<endl;
   }

}

























