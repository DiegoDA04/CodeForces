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
    int n, x;
    cin >> n >> x;
    
    if(n <= 2)
    {
        cout << 1 << "\n";
    }else
    {
        if((n - 2) % x == 0)
        {
            cout << (n-2)/x + 1 << "\n";
        }else
        {
            cout << (n-2)/x + 2 << "\n";
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