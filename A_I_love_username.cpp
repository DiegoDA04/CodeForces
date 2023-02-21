#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
#define vpii vector<pair<int,int>>
using namespace std;

void solve()
{
    int n;
    int min, max;
    cin >> n;
    int arr[n];
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            ct++;
        }
        if(max < arr[i])
        {
            max = arr[i];
            ct++;
        }
    }
    
    cout << ct;
}

int main()
{
    
    solve();

    return 0;
}   