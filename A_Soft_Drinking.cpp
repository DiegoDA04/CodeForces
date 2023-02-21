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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ct = ((k * l) / nl) /n;
    int r = (c * d)/n;
    int o = (p / np)/n;

    
    cout << min(ct,min(r,o));
}

int main()
{
    solve();
                                      
    return 0;
}