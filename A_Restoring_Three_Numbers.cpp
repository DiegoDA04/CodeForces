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
    ll arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);

    ll c = arr[3] - arr[0];
    ll b = arr[3] - arr[1];
    ll a = arr[3] - arr[2];


    cout << a << " " << b << " " << c;
}

int main()
{
    solve();
    
    return 0;
}