#include<cstdio>
#include <cstdlib>
#include <iostream>
#include <Cstring>
#include <algorithm>
using namespace std;

int main()
{
    char a[100];
    int b[100];
    gets(a);
    int i, j=0,len=0;
    int length = strlen(a);
    for(i=0 ; i<length ; i++){
        if(a[i]== '1'|| a[i]== '2' || a[i]=='3' ){
            int c = atoi(&a[i]);
            b[j]=c;
            j++;
            len++;
        }
    }
    sort(b,b+len);
    for(i=0;i<len;i++){
        cout<<b[i];
        if(i<len-1)
            cout<<"+";
    }
    cout<<endl;
    return 0;
}
