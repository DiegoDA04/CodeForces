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
    int w,h, n, ans = 1;

    cin >> w >> h >> n;

    if(n == 1)
    {
        cout << "YES\n";
        return;
    }
    while (w % 2 == 0)
    {
        ans *=2;
        w /=2;
    }
    while (h % 2 == 0)
    {
        ans *=2;
        h /=2;
    }
    if( n <= ans)
    {
        cout << "YES\n";
    }else
    {
        cout << "NO\n";
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