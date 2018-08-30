#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;
#define ll long long int

void inputAndOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\Testing\\input.txt", "r", stdin);
    freopen("D:\\Testing\\output.txt", "w", stdout);
    #endif 
}

int main()
{
    inputAndOutput();
    
    string str; cin >> str;
    vector<char> v1, v2, v3; int ck = 1;

    for(int i=0; i<str.length(); i++) 
    {
        if( str[i] == '(' ) v1.push_back(str[i]);
        if( str[i] == '{' ) v2.push_back(str[i]);
        if( str[i] == '[' ) v3.push_back(str[i]);

        if( str[i] == ')' ) v1.pop_back();
        if( str[i] == '}' ) v2.pop_back();
        if( str[i] == ']' ) v3.pop_back();

        if( str[i] == '(' && str[i+1] == '}' ) ck = 0;
        if( str[i] == '(' && str[i+1] == ']' ) ck = 0;

        if( str[i] == '{' && str[i+1] == ')' ) ck = 0;
        if( str[i] == '{' && str[i+1] == ']' ) ck = 0;
        
        if( str[i] == '[' && str[i+1] == ')' ) ck = 0;
        if( str[i] == '[' && str[i+1] == '}' ) ck = 0;

    }

    if(!ck) {
         cout << "This is not OK !" <<endl;
    }
    else if( v1.empty() && v2.empty() && v3.empty() ) {
        cout << "This is OK !" <<endl;
    }
    else {
        cout << "This is not OK !" <<endl;
    }

    return 0;
}
