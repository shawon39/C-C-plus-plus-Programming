#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, a;
    cin >> x >> y;
    vector<int>v;
    vector<int>v2;

    for(int i=0; i<x; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i=0; i<y; i++)
    {
        cin >> a;
        v2.push_back(a);
    }
    int key = 0, ct = 0, ii=0, jj=0, sum = 0;

    for( ; ii<x; ii++)
    {
        //ii++;
        key += v[ii];
        //cout << "Key: " << key << " " << "ii: " << ii <<endl;

        for( ; jj<=y;)
        {
            //jj++;
            //cout << "Sum: " << sum << " " << "jj: " << jj <<endl;
            if(sum > key)
            {
                //jj--;
                break;
            }
            if(sum == key)
            {
                ct++;
                //jj++;
                key = 0;
                sum = 0;
                break;
            }
            sum += v2[jj++];
            //cout  << "Sum: " << sum << endl;
            if(sum == key)
            {
                ct++;
                key = 0;
                sum = 0;
                break;
            }
            if( sum  > key )
            {
                break;
            }
        }
    }
    cout << ct <<endl;
    return 0;
}


