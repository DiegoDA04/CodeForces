#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve()
{
    int n;
    double sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        sum += a/100.0;
    }
    
    cout << (sum / n) * 100 << "\n";
}

int main()
{

    solve();

    return 0;
}