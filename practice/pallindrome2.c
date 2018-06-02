#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str2[100];
    int k, t, len,i,j;

    scanf("%d", &t);

    getchar();

    for( k = 0; k < t; k++ ){

        gets(str);

        len = strlen(str);
        for(i=len-1,j=0; i>=0; i--)
        {
            str2[j]=str[i];
            j++;
        }
        str2[j]='\0';
        if(strcmp(str,str2)==0)
        {
            printf("Palindrome\n");
        }
        else
        {
            printf("Not Palindrome\n");
        }
    }

    return 0;
}

