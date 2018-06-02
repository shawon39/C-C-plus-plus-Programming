#include <bits/stdc++.h>
using namespace std;

int month[50]={31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31};
int leap[50]={31,29,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31};
int leap2[50]={31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31, 31,29,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31};
int arr[100];

int n,m,f,ct;

bool check1() {

    f = 0;
    for(int i=0; i<48; i++) {
        m = i;
        ct = 0;
       for(int j=0; j<n; j++,m++) {

        if(leap[m]==arr[j]){
            ct++;
            if(ct==n) f = 1;
        }
       }
    }
    if(f==1) return true;
    else return false;
}

bool check2() {

    f = 0;
    for(int i=0; i<48; i++) {
        m = i;
        ct = 0;
       for(int j=0; j<n; j++,m++) {

        if(leap2[m]==arr[j]){
            ct++;
            if(ct==n) f = 1;
        }
       }
    }
    if(f==1) return true;
    else return false;
}

bool check3() {

    f = 0;
    for(int i=0; i<48; i++) {
        m = i;
        ct = 0;
       for(int j=0; j<n; j++,m++) {

        if(month[m]==arr[j]){
            ct++;
            if(ct==n) f = 1;
        }
       }
    }
    if(f==1) return true;
    else return false;
}

int main()
{
    f = 0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bool x = check1();
    bool y = check2();
    bool z = check3();

    (x || y || z) ? cout << "Yes" <<endl : cout << "No" <<endl;

    return 0;
}
