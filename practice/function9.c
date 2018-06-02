#include <stdio.h>
#include <string.h>

int count(char array[],char ch)
{
    int ln,i,cnt=0;
    ln=strlen(array);
    for(i=0; i<ln; i++)
    {
        if(array[i]==ch) cnt++;
    }
    return cnt;
}

int main()
{
    int x;
    char arr[100],s;
    scanf("%s %c",arr,&s);
    x = count(arr,s);
    printf("%d\n",x);

    /**char arr[100],s;
    while(scanf("%s %c",arr,&s)!=EOF){
        printf("character: %d\n",count(arr,s));
    }*/
}
