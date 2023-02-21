#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    ll a[n], b[n];
    ll minA = 10000000001 , minB = 10000000001;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        minA = min(minA, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        minB = min(minB, b[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        ans += (abs(a[i] - minA) + abs(b[i] - minB)) -  min(abs(a[i] - minA), abs(b[i] - minB));
    }
    cout << ans << "\n";
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