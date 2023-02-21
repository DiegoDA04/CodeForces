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
    
    ll a[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        a[i - 1] = pow(2,i);
    }
    
    ll sumA = a[n - 1], sumB = a[n - 2];

    for (int i = 0; i < n - 2; i++)
    {
        if(i < ((n - 2)/2) )
        {
            sumA += a[i];
        }else{
            sumB += a[i];
        }
    }

    cout << abs(sumA - sumB) << "\n";
    
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