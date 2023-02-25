#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll aux = n;
        int ct = 0;
        while (aux > 0)
        {
            ct++;
            aux /= 10;
        }
        int around = round(pow(10, ct - 1));

        if(n - around > 0) cout << n - around << "\n";
        else cout << 0 << "\n";

    }
    
}