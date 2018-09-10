#include <bits/stdc++.h>
using namespace std;

void mergee(int *arr, int left, int mid, int right)
{

	int left_size = mid - left +1;
	int right_size = right - mid;

	int L[left_size+5], R[right_size+5];

	for (int i = 0; i < left_size; i++)
	{
		L[i] = arr[left+i];
	}
	for (int i = 0; i < right_size; i++)
	{
		R[i] = arr[mid+1+i];
	}


	int x = 0, y = 0, z=left;
	while( left_size || right_size )
	{

		if( L[x] < R[y] && left_size )
        {
			arr[z++] = L[x++];
			left_size--;
		}
		else if ( right_size )
        {
			arr[z++] = R[y++];
			right_size--;
		}

		if( !left_size && right_size )
        {
            arr[z++] = R[y++];
            right_size--;
        }

        if( !right_size && left_size )
        {
            arr[z++] = L[x++];
            left_size--;
        }
	}

}

void merge_sort(int *arr, int left, int right)
{
	if(left >= right) return;

	int mid = left + (right - left)/2;

	merge_sort(arr, left, mid);
	merge_sort(arr, mid+1, right);

	mergee(arr, left, mid, right);
}


int main()
{
	//inputAndOutput();

    int n; cin >> n;
    int arr[n+5];

    for(int i=0; i<n; i++) {
    	cin >> arr[i];
    }

    merge_sort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
    	cout << arr[i] << " ";
    }
    cout << endl; return 0;
}


/*

8
9 8 7 6 5 4 3 2

*/


