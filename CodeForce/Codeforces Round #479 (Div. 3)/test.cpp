#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int dirx[8]={0,0,1,-1,1,1,-1,-1};
int diry[8]={1,-1,0,0,1,-1,1,-1};

int dx[6]={0,0,1,-1,-1,1};
int dy[6]={1,-1,0,0,1,-1};

///#pragma comoent(linker,"/stack:200000000")
///#pragma GCC optimize("Ofast")
///#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mox,avx,tune=native")
#define ll             long long
#define sc1(a)         scanf("%d",&a)
#define llsc1(a)       scanf("%lld",&a)
#define sc2(a,b)       scanf("%d %d",&a,&b)
#define llsc2(a,b)     scanf("%lld %lld",&a,&b)
#define sc3(a,b,c)     scanf("%d %d %d",&a,&b,&c)
#define llsc3(a,b,c)   scanf("%lld %lld %lld",&a,&b,&c)
#define min3(a,b,c)    min(a,min(b,c))
#define max3(a,b,c)    max(a,max(b,c))
#define pf             printf
#define cpfl(s)        cout<<s<<endl
#define cpf(s)         cout<<s
#define FOR(a)         for(ll i=0;i<a;i++)
#define inf            2e18
#define pr             pair<int,int>
#define mpp            make_pair
#define pi             acos(-1)
#define sqr(a)         (a*a)
#define all(a)         a.begin(),a.end()
#define rev(a)         reverse(all(a))
#define newline        pf("\n")
#define mem(a,b)       memset(a,b,sizeof(a))
#define srt(a,n)       sort(a,a+n)
#define pks(a)         pf("Case %d: ",a)
#define mx             200005
#define mm             1420
#define mod            1000000007
#define frd            freopen("input.txt","r",stdin)
#define fpf            freopen("output.txt","w",stdout)

string tostring(ll n){if(!n)return "0";string ans="";while(n!=0){ans+=(n%10)+'0';n/=10;}reverse(ans.begin(),ans.end());return ans;}
double toDouble(string s){double ans=0;int i=0,flag=0,cnt=0,ff=1;while(i<s.length()){if(s[i]=='-'){ff=-1;i++;continue;}if(s[i]=='.'){flag=1;i++;continue;}ans*=10;ans+=s[i]-'0';if(flag)cnt++;i++;}ans*=ff;return ans/pow(10,cnt);}
/// Template Ends
///
int ar[mx];
int main()
    {
        int n,k;
        sc2(n,k);
        for(int i=1;i<=n;i++){
            sc1(ar[i]);
        }
        sort(ar+1,ar+n+1);
        if(!k){
            if(ar[1]==1){
                cpfl(-1);
                return 0;
            }
            cpfl(1);
            return 0;
        }
        if(k==n){
            cpfl(1000000000);
            return 0;
        }
        if(ar[k]==ar[k+1]){
            cpfl(-1);
            return 0;
        }
        cpfl(ar[k]);
        return 0;
    }
