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
    int ans = n/3;
    if(n % 3 == 0)
    {
        cout << ans << " " << ans << "\n";
    }else
    {
        if((ans + 1) + 2 * ans == n)
        {
            cout << ans + 1 << " " << ans << "\n";
        }else
        {
            cout << ans << " " << ans + 1 << "\n";
        }
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