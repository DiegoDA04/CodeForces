#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    int ct = 1;
    while (n--)
    {
        string a;
        cin >> a;
        s +=a;
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            ct++;
        }
    }
    cout << ct;
}

int main()
{

    solve();

    return 0;
}