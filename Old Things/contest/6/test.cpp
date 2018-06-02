#include<cstdio>
#include <cstdlib>
#include <iostream>
#include <Cstring>
#include <algorithm>
using namespace std;

int main()
{
    int i,ln,arr[100],j=0,num=0;
    char ch[100];
    cin >> ch;
    ln=strlen(ch);
    for(i=0; i<ln; i++)
    {
        if(ch[i]=='1' || ch[i]=='2' || ch[i]=='3')
        {
            arr[j]= atoi(&ch[i]);
            j++;
            num++;
        }
    }
    sort(arr,arr+num);
    for(i=0; i<num; i++)
    {
        cout << arr[i];
        if(i<num-1) cout << "+";
    }
    cout<<endl;
    return 0;
}

