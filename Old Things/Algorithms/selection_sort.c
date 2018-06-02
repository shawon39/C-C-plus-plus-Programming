#include <stdio.h>
#include <string.h>
int main()
{
    int array[] = {2,41,8,7,91,0,42};
    int len,minvalue,minindex,temp,i,j,x=0;
    len = sizeof(array) / sizeof(int);
    for(i=0; i<len-1; i++)
    {
        minvalue = array[i];
        minindex = i;
        for(j=i+1; j<len; j++)
        {
            if(array[j] < minvalue){
                minvalue = array[j];
                minindex = j;
            }
        }
            if(i<j){
            temp = array[i];
            array[i] = array[minindex];
            array[minindex] =temp;
            }
    }
    while(x!=len){
        printf("%d ",array[x]);
        x++;
    }
    return 0;
}
