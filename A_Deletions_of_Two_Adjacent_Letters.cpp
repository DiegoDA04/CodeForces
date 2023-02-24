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
            if(s[i] == c){
                if(i == 0 && (s.size() - (i + 1)) % 2 == 0) {
                    check = true;
                    break;
                }
                if(i == s.size() - 1 && i % 2 == 0) {
                    check = true;
                    break;
                }
                if(i % 2 == 0 && (s.size() - (i + 1)) % 2 == 0) {
                    check = true;
                    break;
                }
            } 
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}