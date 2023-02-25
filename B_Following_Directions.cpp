#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool check = false;

        int x = 0, y = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'U') y++;
            if(s[i] == 'D') y--;
            if(s[i] == 'R') x++;
            if(s[i] ==  'L') x--;

            if(x == 1 && y == 1) {
                check = true;
                break;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}