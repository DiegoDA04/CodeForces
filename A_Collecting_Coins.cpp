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
    int a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a + 3);
    int dif = (a[2] - a[0]) + (a[2] - a[1]);
    
    if((n - dif )% 3 == 0 && n >= dif)
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