#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
#define mpii map<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;

int countDigits(int n)
{
    int ct = 0;
    while (n > 0)
    {
        n /= 10;
        ct++;
    }
    return ct;
}

void solve()
{
    int n;
    cin >> n;

    int d = countDigits(n);
    int div = 1;

    for (int i = 0; i < d - 1; i++)
    {
        div = div * 10 + 1;
    }
    
    cout << (d - 1) * 9 + n/div<< "\n";
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