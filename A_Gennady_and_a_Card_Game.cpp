#include<bits/stdc++.h>

using namespace std;

int main() {
    string card;
    cin >> card;

    string cards[5];
    cin >> cards[0] >> cards[1] >> cards[2] >> cards[3] >> cards[4];

    bool check = false;

    for (int i = 0; i < 5; i++)
    {
        if(cards[i][0] == card[0] || cards[i][1] == card[1]) {
            check = true;
            break;
        }
    }
    
    if(check) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}