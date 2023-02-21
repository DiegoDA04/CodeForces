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
    ll x, y, n;
    cin >> x >> y >> n;
    
    ll ans = n - n % x + y;
    if(ans <= n)
    {
        cout << ans << "\n";
    }else{
        cout << (n - n % x - (x - y)) << "\n";
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