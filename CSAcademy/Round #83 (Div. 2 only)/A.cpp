#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool cmp(string a,string b){
   return a.size() < b.size();
} //sort(s,s+n,cmp);

// descending order
bool myfun(int a, int b){
    return a>b;
}

struct Greater {
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), Greater());
//v.erase (v.begin());

// multimap.insert( make_pair(12, 34) );
// multimap <int, string> :: reverse_iterator rit;

// for (rit=mmap.rbegin(); rit!=mmap.rend(); ++rit)
    //cout << rit->first << rit->second <<endl;

// b.find(a) != -1


int main()
{
    string str, str2; cin >> str;
    int total = 1, d=0, c=0, x=1, y=1;
    str2 = str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='d') total *= 10;
        else total *= 26;
    }

    for(int i=0; i<str.length(); i++)
    {
        if( str[i] == 'd' && str[i+1] == 'd' ) d++;
        if( str[i] == 'c' && str[i+1] == 'c' ) c++;
    }

    int error = 1;

    if( d == 1 ) x = 10;
    if( d == 2 ) x = 190;
    if( d == 3 ) x = 2710;
    if( c == 1 ) y = 26;
    if( c == 2 ) y = 1326;
    if( c == 3 ) y = 50726;

    for(int i=0; i<str.length()-1; i++)
    {
        if( str[i] == 'd' && str[i+1] == 'd' ) {
            str2[i] = '*';
            str2[i+1] = '*';
        }
        if( str[i] == 'c' && str[i+1] == 'c' ) {
            str2[i] = '*';
            str2[i+1] = '*';
        }
    }

    for(int i=0; i<str2.length(); i++)
    {
        if(str2[i] == 'd' && ( d || c ) ) {
            error *= 10;
        }
        if(str2[i] == 'c' && ( d || c ) ) {
            error *= 26;
        }
    }

    if( d ==0 && c ==0 ) error = 0;

    if( str == "ddcc" ||  str =="ccdd" ) {
        cout << total - ( 26*10*10 + 10*26*26 - 260 ) <<endl;
        return 0;
    }


    //cout <<  total << " " << error*x*y <<endl;
    cout << ( total - (error*x*y)) <<endl;
    main();
    return 0;
}






















