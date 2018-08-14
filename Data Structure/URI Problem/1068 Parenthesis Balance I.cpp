#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast;
    vector<char> v;
    string s;
    while(cin >> s) {

        for(int i=0; i<s.length(); i++) {

           if(s[i]=='(') v.push_back(s[i]);
           if(s[i]==')') {
                if(!v.empty()) v.pop_back();
                else v.push_back(s[i]);
           }
        }
        (!v.empty())? cout << "incorrect" <<endl : cout << "correct" <<endl;
        v.clear();
    }
    return 0;
}


