#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int dx[] = { 0, 0, -1,    1, -1, -1,  1, 1};
int dy[] = {-1, 1,  0,    0, -1,  1, -1, 1};

typedef long long int           ll;
typedef unsigned long long int  llu;
typedef pair<int,int>           pr;

#define     pf(a)                   cout<<a<<endl
#define     sci(a)                  scanf("%d",&a)
#define     scii(a, b)              scanf("%d %d",&a, &b)
#define     sciii(a, b, c)           scanf("%d %d %d",&a, &b, &c)
#define     scl(a)                  scanf("%lld", &a)
#define     scll(a, b)              scanf("%lld %lld", &a, &b)
#define     sclll(a, b, c)          scanf("%lld %lld %lld", &a, &b, &c)
#define     umap                    unordered_map
#define     mem(a,b)                memset(a,b,sizeof(a))
#define     IO                      ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define     READ(f)                 freopen(f,"r",stdin)
#define     WRITE(f)                freopen(f,"w",stdout)

#define     mx                      100007
#define     mod                     1000000007
#define     base                    10000007
#define     eps                     1e-9
#define     INF                     1llu<<61
#define     inf                     1<<29
#define     PI                      acos(-1.0) //3.14159.....

////


int ar[mx],f[mx];
map<int,int>mp;

int main()
{
    int zero,one,pos;
    sciii(zero,one,pos);
    string str="",ans="";

    if(zero >= one){
        for(int i=1;i<=pos+1;i++){
            if(i&1) {str += "0" ;  zero--;}
            else {str += "1";  one--;}
        }
    }
    else {
        for(int i=1;i<=pos+1;i++){
            if(i&1) {str += "1"; one--;}
            else {str += "0"; zero--;}
        }
    }

    for(int i=0;i<str.size();i++){
        cout<<str[i];
        if(str[i]=='0' && zero){
            for(int j=0;j<zero;j++) cout<<"0";
            zero=0;
        }
        if(str[i]=='1' && one){
            for(int j=0;j<one;j++) cout<<"1";
            one = 0;
        }
    }
    cout<<endl;
}
