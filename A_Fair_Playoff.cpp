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
    int f1,f2;
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    f1 = max(a[0],a[1]);
    f2 = max(a[2],a[3]);

    sort(a,a + 4);

    if(a[2] == f1 && f2 == a[3] || a[2] == f2 && a[3] == f1)
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