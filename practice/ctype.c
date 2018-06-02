/** isprint iscntr ispunct isspace isalnum isalpha isdigit islower isupper toascii tolower toupper

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isprint(ch)){
        printf("YES!\n");
    }
    else{
        printf("NO!\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(iscntrl(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(ispunct(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isspace(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isalnum(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isalpha(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(islower(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch = getchar();
    if(isupper(ch)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    int ascii;
    ch = getchar();
    ascii = toascii(ch);
    printf("%d\n",ascii);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch,chh;
    ch=getchar();
    chh=tolower(ch);
    printf("%c\n",chh);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch,chh;
    ch=getchar();
    chh=toupper(ch);
    printf("%c\n",chh);
}
*/





















