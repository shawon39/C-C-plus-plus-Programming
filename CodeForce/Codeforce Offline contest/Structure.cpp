#include <bits/stdc++.h>
using namespace std;

typedef struct play {
    string name;
    int score;
}var;

int main()
{
    var game[110];
    int mx = -1050;
    string lol;
    vector<string> v;
    vector<string> v2;
    int n; cin >> n;

    for(int i=0; i<n; i++) { cin >> game[i].name >> game[i].score; }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++){
            if(game[i].name == game[j].name) {
                game[i].score += game[j].score;
                game[j].name =".";
                game[j].score = 0;
            }
        }

    }
    for(int i=0; i<n; i++){
        cout << game[i].name << " " << game[i].score <<endl;
    }
    cout << lol << " " << mx;
    return 0;
}



