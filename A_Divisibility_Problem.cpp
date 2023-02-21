#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if( a % b == 0 ) 
    {
        cout << 0 << "\n";
    }else{
        cout << (((a / b) + 1) * b) - a << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}