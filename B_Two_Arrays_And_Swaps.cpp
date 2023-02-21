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
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    int sumA = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sumA += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);

    for(int i = n - 1; i >= 0; i--)
    {
        if(k > 0 && a[n - 1 - i] < b[i])
        {
            sumA = (sumA - a[n - 1 - i]) + b[i];
            swap(a[n - 1 - i],b[i]);
            k--;
        }
    }
    
    cout << sumA << "\n";
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