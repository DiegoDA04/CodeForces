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
    ll a, b;
    cin >> a >> b;

    if(abs(a - b) % 10 > 0)
    {
        cout << (abs(a - b) / 10) + 1 << "\n";
    }else{
        cout << (abs(a - b))/ 10 << "\n";
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