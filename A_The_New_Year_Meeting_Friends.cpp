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
    int arr[3];

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    cout << abs(arr[0] - arr[1]) + abs(arr[1] - arr[2]);
}

int main()
{

    solve();
    
    return 0;
}