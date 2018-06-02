#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k=0;
    string str,str2;
    double n;
    list <string> l;
    scanf("%d",&t);
    while(t--)
    {
        str2.clear();
        str2="00000000000000";
        cin >> str;
        j=0;
        for(i=0; i<str.length(); i++){

            if(str[i]=='(' || str[i]==')'){
                continue;
            }
            else{
                str2[j]=str[i];
                j++;
            }
        }
        n = atof(str2.c_str());
        n = fabs(n);
        double y = (1/n);
        int x = y;
        printf("Case #%d: 1/%d\n",++k,x);
    }
    return 0;
}
