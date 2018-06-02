#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str, str2, str3;
    cin >> n;
    cin >> str;
    map <string,int> mp;
    map <string, int>:: iterator it;

    for(int i=0; i<str.length()-1; i++)
    {
        str2 = str[i];
        str2 += str[i+1];

        for(int j=0; j<str.length()-1; j++)
        {
            str3 = str[j];
            str3 += str[j+1];

            if(str2 == str3) {
                mp[str2]++;
            }
        }
    }

   // for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
      //  std::cout << iter->first << ": " << iter->second << std::endl;
   // }

    for(it = mp.begin(); it!=mp.end(); it++){
       cout << it->first << " " << it->second <<endl;
       //it->second /=2;
    }

   // it = mp.begin();
   // cout << it->first <<endl;
    //main();
    return 0;
}













