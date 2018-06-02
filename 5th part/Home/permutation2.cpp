#include <bits/stdc++.h>
using namespace std;

void permutations(string str, int i, int n)
{
	if (i == n-1) {
		cout << str << endl;
		return;
	}
	for (int j = i; j < n; j++)
	{
		swap(str[i], str[j]);
		permutations(str, i + 1, n);
        swap(str[i], str[j]);
	}
}

int main()
{
	string str = "ABCD";
	permutations(str, 0, str.length());
	return 0;
}

