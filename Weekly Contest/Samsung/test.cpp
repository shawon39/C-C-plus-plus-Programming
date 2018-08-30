#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    std::vector<int> myvector (3,100);
    std::vector<int>::iterator it;

    it = myvector.begin() + 3;

    myvector.insert (it,1,99);


    for(int i=0; i<myvector.size(); i++)
    {
        cout << myvector[i] << " ";
    }

    return 0;
}
