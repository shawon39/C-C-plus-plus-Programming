/// Ref: http://www.cplusplus.com/reference/list/list/splice/

/// List is almost same with vector! For list there are some additional function
/// List is slower than vector

push_front(), pop_front(),
remove(), remove_if(),
unique(), sort(),
emplace_front(), emplace_back(),
splice(position, value) ***
reverse()

// Predicate implemented as a function
bool even(const int& value) { return (value % 2) == 0; }
bool odd(const int& value) { return (value % 2) == 1; }

#include <iostream>
#include <list>
using namespace std;

int main ()
{
    list<int>list1;
    list1.emplace_back(10);
    list1.emplace_back(11);
    list1.emplace_back(11);
    list1.emplace_back(30);
    list1.emplace_back(22);
    list1.emplace_back(11);

     for(auto x : list1){ cout << x << " "; } cout << endl;

     list1.remove(1);      /// complexity O(n)
     list1.remove_if(odd); /// complexity O(n)

     list1.sort();
     list1.unique();

     list<int>list2{100,200,300, 400};
     list<int>::iterator it,it2;

     it = list2.begin(); it++;
     it2 = list2.begin(); it2++; it2++; it2++;

     list2.splice(it, list1); /// move elements from list1 to list2 in a given position(it)

     list2.splice(list1.begin(), list2, it);                /// insert a particular value in list1 from list2 depend on it
     list2.splice(list1.begin(), list2, it, it2);   /// insert some values in list1 from list2 depend on it to it2

     for(auto x : list2){ cout << x << " "; } cout << endl;
     for(auto x : list1){ cout << x << " "; } cout << endl;


     it = list2.begin();
     advance(it,3); /// "it" points now to third elements

     list2.splice(list2.begin(), list2, it, list2.end());

     for(auto x : list2){ cout << x << " "; } cout << endl;

    return 0;
}
