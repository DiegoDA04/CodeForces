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
    string b, a;
    cin >> b;

    a.push_back(b[0]);

    for (int i = 1; i < b.length() - 1; i+=2)
    {
        if(b[i] == b[i + 1])
        {
            a.push_back(b[i]);
        }
    }
    a.push_back(b[b.length() - 1]);

    cout << a << "\n";
    
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