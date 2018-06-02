#include <iostream>
using namespace std;

void recursion(int cnt)
{
    if(cnt == 5) return;
    cout << "I Love Coding" <<endl;
    recursion(cnt+1);
    return;
}

int main()
{
    recursion(1);
    return 0;
}
