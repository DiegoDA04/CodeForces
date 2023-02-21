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
    int a[n];
    int ans = 0;
    int nEven = 0, nOdd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            nEven++;
        }else{
            nOdd++;
        }
    }
    if((n % 2 == 0 && nEven == nOdd) || (n % 2 == 1 && nEven + (nEven - 1) == n))
    {
        for (int i = 0; i < n; i++)
        {
            if(i % 2 != a[i] % 2)
            {
                ans++;
            }
        }
        cout << ans/2 << "\n";
    }else{
        cout << -1 << "\n";
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