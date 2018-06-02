#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define newl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)

int main()
{
    int ct = 0;
    string str;
    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            ct++;
            continue;
        }
        int x = str[i]-'0';
        if(x>=0 && x<=9){
            if(x%2==1) ct++;
        }
    }
    pf1(ct);
    return 0;
}


