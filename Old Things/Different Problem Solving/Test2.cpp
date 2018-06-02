#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1110];
    int i,t,ct,ct2,ct3,len;
    scanf("%d",&t);
    while(t--)
    {
        ct=0;
        ct2=0;
        ct3=0;
        scanf(" %[^\t\n]s",&ch);

        len = strlen(ch);

        for(i=0; i<len; i++)
        {

            if( ( ch[len-1]=='.' && ch[len-2]=='a' && ch[len-3]=='l' && ch[len-4]=='a' && ch[len-5]=='l' ) &&
                    ( ch[0]=='m' && ch[1]=='i' && ch[2]=='a' && ch[3]=='o' && ch[4]=='.' ) )
            {
                ct3=1;
            }
            else if( ( ch[0]=='m' && ch[1]=='i' && ch[2]=='a' && ch[3]=='o' && ch[4]=='.'  ))
            {
                ct2=1;
            }
            else if( ( ch[len-1]=='.' && ch[len-2]=='a' && ch[len-3]=='l' && ch[len-4]=='a' && ch[len-5]=='l' ) )
            {
                ct=1;
            }
            else ct3=1;
        }


        if(ct2==1)
        {
            printf("Rainbow's\n");
        }
        else if(ct==1)
        {
            printf("Freda's\n");
        }

        else if(ct3==1) printf("OMG>.< I don't know!\n");
    }

    return 0;
}

