#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a > max(b, c)) cout << 0 << " ";
        else cout << max(b,c) - a + 1 << " ";

        if(b > max(a, c)) cout << 0 << " ";
        else cout << max(a, c) - b + 1<< " ";

        if(c > max(a, b)) cout << 0 << endl;
        else cout << max(a, b) - c + 1<< endl;
    }
    

    return 0;
}