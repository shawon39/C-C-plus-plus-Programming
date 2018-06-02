#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    string ch;
    while ( cin >> n ) {

        int cnt =0;
        for(int j=0; j<n; j++) {
            cin >> ch;
            int ct[10001]={0};
            int lol = 0;
            if(ch.length()==1) continue;
            for(int i=0; i<ch.length(); i++){

                     if(ch[i]=='a') ct[0]++;
                else if(ch[i]=='b') ct[1]++;
                else if(ch[i]=='c') ct[2]++;
                else if(ch[i]=='d') ct[3]++;
                else if(ch[i]=='e') ct[4]++;
                else if(ch[i]=='f') ct[5]++;
                else if(ch[i]=='g') ct[6]++;
                else if(ch[i]=='h') ct[7]++;
                else if(ch[i]=='i') ct[8]++;
                else if(ch[i]=='j') ct[9]++;
                else if(ch[i]=='k') ct[10]++;
                else if(ch[i]=='l') ct[11]++;
                else if(ch[i]=='m') ct[12]++;
                else if(ch[i]=='n') ct[13]++;
                else if(ch[i]=='o') ct[14]++;
                else if(ch[i]=='p') ct[15]++;
                else if(ch[i]=='q') ct[16]++;
                else if(ch[i]=='r') ct[17]++;
                else if(ch[i]=='s') ct[18]++;
                else if(ch[i]=='t') ct[19]++;
                else if(ch[i]=='u') ct[20]++;
                else if(ch[i]=='v') ct[21]++;
                else if(ch[i]=='w') ct[22]++;
                else if(ch[i]=='x') ct[23]++;
                else if(ch[i]=='y') ct[24]++;
                else if(ch[i]=='z') ct[25]++;
            }
            int m=0;
            for(int x=0; x<26; x++) {
                if(m==1) break;
                for(int y=x+1; y<26; y++){
                    if(ct[x]==ct[y] && ct[x]!=0){
                        lol=1;
                        m=1;
                       break;
                    }
                }
            }
            if(lol!=1) cnt++;
        }
        cout << "Case "<<i++ <<": "<< cnt <<endl;

    }
    return 0;
}

