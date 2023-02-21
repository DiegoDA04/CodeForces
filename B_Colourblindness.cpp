#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        for(int i = 0; i < n; i++) {
            if(a[i] == 'G' && b[i] == 'B' || a[i] == 'B' && b[i] == 'G') {
                b[i] = a[i];
            }
        }
        if(a == b) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}