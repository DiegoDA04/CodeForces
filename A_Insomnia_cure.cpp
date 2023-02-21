#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int ct = 0;
    for (int i = 1; i <= d; i++)
    {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            ct++;
        }
    }
    cout << ct;
}

int main()
{

    solve();

    return 0;
}