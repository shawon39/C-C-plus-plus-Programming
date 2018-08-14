#include <bits/stdc++.h>
using namespace std;

bool leapYear(int y){
   bool isLeapYear = false;
   if (y % 4 == 0) {
      if (y % 100 == 0) {
         if (y % 400 == 0) {
            isLeapYear = true;
         }
      }
      else isLeapYear = true;
   }
   return isLeapYear;
}

int main()
{
    int n, cnt=0, ans; cin >> n;
    vector<string>v;

    v.push_back("Sunday");
    v.push_back("Monday");
    v.push_back("Tuesday");
    v.push_back("Wednesday");
    v.push_back("Thursday");
    v.push_back("Friday");
    v.push_back("Saturday");

    for(int i=1867; i<=n+1867; i++)
    {
        if( leapYear(i) ) cnt++;
    }

    ans = ( n*365 ) + cnt;

    cout << v[ans%7] <<endl;

    return 0;
}
