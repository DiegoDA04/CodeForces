#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int f[n];
    int g[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        g[f[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << g[i] << " ";
    }
    
}

int main()
{

    solve();
   
    return 0;
}