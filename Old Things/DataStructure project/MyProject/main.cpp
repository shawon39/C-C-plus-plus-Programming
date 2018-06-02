#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Array[] = {3,1,74,76524,43,3,54,3,465,24724,7};
    int i,j,length;
    length = sizeof(Array);
    for(i=0; i<length; i++)
    {
        //temp = Array[i];
        for(j=i-1; j>=0; j--){
            if(Array[i] < Array[j])
            {
                 swap(Array[i],Array[j]);
            }
        }
    }
    for(i=0; i<length; i++){
        cout << Array[i] << " ";
    }

    return 0;
}
