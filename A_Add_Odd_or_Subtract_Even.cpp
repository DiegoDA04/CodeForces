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
    int a, b;
    cin >> a >> b;  

    int dif = abs(a - b);

    if(a > b)
    {
        if(dif % 2 == 0)
        {
            cout << 1 << "\n";
        }else
        {
            cout << 2 << "\n";
        }
    }else if(a == b)
    {
        cout << 0 << "\n";
    }else
    {
        if(dif % 2 == 1)
        {
            cout << 1 << "\n";
        }else
        {
            cout << 2 << "\n";
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