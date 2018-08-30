// Ref: https://www.geeksforgeeks.org/vector-in-cpp-stl/

vector::begin() and vector::end()
vector rbegin() and rend()
vector::cbegin() and vector::cend()
vector::crend() and vector::crbegin()
vector::assign()
vector::at()
vector::back()
vector::capacity()
vector::clear()
vector::push_back()
vector::pop_back()
vector::empty()
vector::erase()
vector::size()
vector::swap()
vector::reserve()
vector::resize()
vector::shrink_to_fit()
vector::front()
vector::back()
vector::data()
vector::emplace_back()
vector::emplace() // we can use emplace instead of insert
vector::max_size()
vector::insert()


/// Part 1
//------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++){ v.push_back(i); }

    for(auto x : v){ cout << x << " "; } cout << endl;

    for(int i=0; i<v.size(); i++){ cout << v[i] << " ";} cout << endl;

    // NO need to iterator if we use auto!
    for (auto i = v.begin(); i != v.end(); ++i){ cout << *i << " ";} cout << endl;

    for (auto i = v.rbegin(); i != v.rend(); ++i){ cout << *i << " "; }

    /// cbegin() and cend use for constant value ( ascending )
    /// crbegin() and crend use for constant value ( descending )
}

/// Part 2
//------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i++){ v.push_back(i);}

    cout << "Size : " << v.size() <<endl;
    cout << "Capacity : " << v.capacity() <<endl;
    cout << "Max_Size : " << v.max_size() ;

    v.resize(2); ///Size will be change
    v.empty(); /// check vector is empty

    /// After resize capacity will not reduce. So
    /// we can use shrink_to_fit to reduce the capacity
    v.shrink_to_fit();

    /// Reserve 1000 space in v
    v.reserve(1000);

}

/// Part 3
//------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 10; i++){ v.push_back(i * 10); }

    cout << v.at(4) <<endl;
    cout << v.front() <<endl;
    cout << v.back() <<endl;

    // pointer to the first element
    int* pos = v.data();

    cout << "The first element is " << *pos <<endl;

}


/// Part 4
//------------------------------

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // Assign vector
    vector<int> v;
    // fill the array with 10 five times
    v.assign(5, 10);
    // removes last element
    v.pop_back();
    // inserts 5 at the beginning (position, value)
    v.insert(v.begin(), 5);
    // removes the first element
    v.erase(v.begin());
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    // Inserts 20 at the end
    v.emplace_back(20);
    // erases the vector
    v.clear();
    v1.swap(v2);
}

















