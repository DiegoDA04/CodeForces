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
    int arr[n];
    mpii mp;
    vi ones;
    vi twos;
    vi threes;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1) ones.push_back(i + 1);
        if(arr[i] == 2) twos.push_back(i + 1);
        if(arr[i] == 3) threes.push_back(i + 1);
        
        mp[arr[i]]++;
    }

    int ct = 0;

    if(mp[1] > 0 && mp[2] > 0 && mp[3] > 0)
    {
        ct = min(mp[1], min(mp[2],mp[3]));
    }

    cout << ct << "\n";

    for (int i = 0; i < ct; i++)
    {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << "\n";
    }
    
}

int main()
{
    solve();
                                      
    return 0;
}