#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int ct = 0;

    while (t--)
    {
        int a, b , c;
        cin >> a >> b >> c;

        if(a + b + c >= 2){
            ct++;
        }
    }
    cout << ct << "\n";

    return 0;
}