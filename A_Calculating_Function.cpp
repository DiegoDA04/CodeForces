#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve()
{
    lli n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout << 1 * n/2 << "\n";
    }else{
        cout << (1 * n/2) - n << "\n";
    }
}

int main()
{

    solve();

    return 0;
}