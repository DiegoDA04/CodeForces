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
    string s;
    cin >> s;

    if(s.length() % 2 == 0)
    {
        string s1, s2;
        s1 = s.substr(0,s.length()/2);
        s2 = s.substr(s.length()/2,s.length()/2);

        if(s1 == s2)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }
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