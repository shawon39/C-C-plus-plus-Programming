#include <bits/stdc++.h>
using namespace std;

struct Books
{
	string author;
	int id;
	double price;
};

int main()
{
    Books book1;
    cin >> book1.author >> book1.id >> book1.price;
    cout << book1.author << endl << book1.id << endl << book1.price << endl;
}