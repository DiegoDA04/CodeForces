#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    mpii mp;
    int a;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        mp[a]++;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        mp[a]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(mp[i + 1] == 0)
        {
            cout << "Oh, my keyboard!";
            return;
        }
    }
    cout << "I become the guy.";
}

int main()
{

    solve();

    return 0;
}