#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string s("abc");
    do
    {
        std::cout << s << "\n";
    }
    while ( std::next_permutation(s.begin(), s.end()) );
}
