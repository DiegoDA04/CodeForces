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
    int n, m;
    cin >> n >> m;
    if(n > 2)
    {
        cout << m * 2 << "\n";
    }else if(n == 1)
    {
        cout << 0 << "\n";
    }else
    {
        cout << m << "\n";
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