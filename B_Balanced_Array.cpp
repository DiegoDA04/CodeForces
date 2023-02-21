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
    ll sum1 = 0, sum2 = 0;
    cin >> n;
    
    if(n % 4 == 0)
    {
        
        cout << "YES\n";
        for (int i = 2; i <= n ; i+= 2)
        {
            cout << i << " ";
            sum1 +=i;
        }
        for (int i = 1; i < n - 2; i +=2)
        {
            cout << i << " ";
            sum2 +=i;
        }
        cout << sum1 - sum2 << "\n";
        
    }else{
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