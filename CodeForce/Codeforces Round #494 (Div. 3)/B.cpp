#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool cmp(string a,string b)
{
    return a.size() < b.size();
} //sort(s,s+n,cmp);

// descending order
bool myfun(int a, int b)
{
    return a>b;
}

struct Greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const
    {
        return a > b;
    }
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
    int a,b,x; string str="";
    cin >> a >> b >> x;
    int fk = 0; if(a>=b) fk=1;

    // if zero >= one then we start from zero otherwise value might be -1
    // because of x+1

    for(int i=0; i<x+1; i++)
    {
        if(fk) {
            if(i%2==1) str += '1', b--;
            else str += '0', a--;
        }
        else {
            if(i%2==1) str += '0', a--;
            else str += '1', b--;
        }
    }

    for(int i=0; i<str.length(); i++)
    {
        cout << str[i];
        if(str[i] == '0' && a ) {
            for(int k=0; k<a; k++) {
                cout << "0";
            }
            a = 0;
        }
        if(str[i] == '1' && b ) {
            for(int k=0; k<b; k++) {
                cout << "1";
            }
            b = 0;
        }
    }
    cout << endl;
    //main();
    return 0;
}











