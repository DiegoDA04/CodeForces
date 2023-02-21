#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int ans = 0;
    char current = 'a';
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(abs(current - s[i]) <= 13) ans += abs(current - s[i]);
        else ans += (26 - abs(current - s[i]));
        current = s[i];
    }

    cout << ans;

    
    return 0;
}