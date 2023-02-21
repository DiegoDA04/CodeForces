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
    int a[4];
    ll ans = 0;
    string s;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;

    for (int i = 0; i < s.length(); i++)
    {
        ans += a[s[i] - '1'];
    }
    
    cout << ans;
}

int main()
{
    solve();
                                      
    return 0;
}