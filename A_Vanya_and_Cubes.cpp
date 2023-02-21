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
    int ans = 0 , h = 1;
    
    while (ans < n)
    {
        h++;
        ans += h *(h + 1)/2;
    }
    cout << h  - 1 << "\n";
}

int main()
{
    
    solve();
                                     
    return 0;
}