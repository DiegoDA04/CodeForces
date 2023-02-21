#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int a[3] = {0};
        for(int i = 0 ; i < s.size(); i++) {
            a[s[i] - 'A']++;
        }
        if((a[1] - a[0]) - a[2] == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}