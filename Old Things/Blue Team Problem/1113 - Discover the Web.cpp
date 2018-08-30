#include <bits/stdc++.h>
using namespace std;

#define d(x) cout << "TEST: " << x <<endl

int main()
{
    int test; cin >> test;

    for(int i=1; i<=test; i++)
    {
        vector<string>web,ans;
        vector<string>::iterator it;
        web.push_back("http://www.lightoj.com/");
        string str; int pos = 0;

        //cout << "Case " << i << ":" <<endl;
        while(cin >> str) {
            if(str=="VISIT") {
                string site; cin>> site;
                web.resize(pos+1);
                web.push_back(site);
                pos++;
                //cout << site << endl;
                ans.push_back(site);
            }
            else if(str=="BACK") {
                if(pos == 0) {
                    //cout << "Ignored" <<endl;
                    ans.push_back("Ignored");
                }
                else {
                    it = web.begin()+pos;
                    it--; pos--;
                    //cout << *it << endl;
                    ans.push_back(*it);
                 }
            }
            else if(str=="FORWARD") {
                if(web.size()-1 == pos) {
                    //cout << "Ignored" <<endl;
                    ans.push_back("Ignored");
                }
                else {
                    pos++;
                    it = web.begin()+pos;
                    //cout << *it << endl;
                    ans.push_back(*it);
                }
            }
            else if(str=="QUIT") {
                break;
            }
        }
        cout << "Case " << i << ":" <<endl;
        for (it = ans.begin(); it != ans.end(); ++it){ cout << *it << endl;}
    }

    return 0;
}
