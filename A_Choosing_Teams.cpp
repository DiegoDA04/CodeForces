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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if(k + arr[i] <= 5)
        {
            ct++;
        }
    }
    cout << ct / 3 << "\n";
}

int main()
{
    
    solve();
                                         
    return 0;
}