#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int d1 = a - 1, d2 = abs(b - c ) + c - 1;
        
        if(d2 == d1) cout << 3 << endl;
        else if(d2 > d1) cout << 1 << endl;
        else cout << 2 << endl;
    }
    
    return 0;
}