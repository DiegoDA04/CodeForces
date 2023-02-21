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
    char x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            if(x != 'B' && x != 'W' && x != 'G')
            {
                cout << "#Color";
                return;
            }
        }
        
    }
    cout << "#Black&White";
}

int main()
{
    
    solve();
                                     
    return 0;
}