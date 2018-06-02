#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,l,lol=0,i=0;
    cin >> a >> b >> c;
    n = 10001;

    while(n--){

        i++;
        a = a%b;
        if(a < b) a *= 10;
        l = a/b;
        if(l==c){
            lol =1;
            break;
        }

    }
    (lol==1)? cout << i <<endl : cout << "-1" <<endl;
    return 0;
}
