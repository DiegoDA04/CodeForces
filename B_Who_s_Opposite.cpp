#include<bits/stdc++.h>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b ,c;
        cin >> a >> b >> c;

        int l = abs(a - b) * 2;

        if(a > l || b > l || c > l) 
            cout << -1 << "\n";
        else
        {
            int dif = l / 2 + c;
            while(dif > l) dif -= l;

            cout << dif << "\n";
        }
    }
    

    return 0;
}