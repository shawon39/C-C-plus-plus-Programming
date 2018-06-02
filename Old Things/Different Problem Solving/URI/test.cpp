#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

int main()
 {
     string str; cin >> str;
     int i, ct=0;
     for(i=0; i<str.length(); i++){
        if(str[i]==tolower(str[i])) ct++;
     }
     if(ct==0){
        for(i=0; i<str.length(); i++)
            str[i]=tolower(str[i]);
        cout<< str <<endl;
     }
     else if(ct==1 && str[0]==tolower(str[0])){
        str[0]=toupper(str[0]);
        for(i=1; i<str.length(); i++){
            str[i]=tolower(str[i]);
        }
        cout<< str <<endl;
     }
     else cout<< str <<endl;

     return 0;
 }
