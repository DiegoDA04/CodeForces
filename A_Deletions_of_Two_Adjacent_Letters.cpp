#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        cin >> c;

        bool check = false;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == c && i % 2 == 0) check = true;
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}