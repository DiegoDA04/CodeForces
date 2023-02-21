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
    int n,ct = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if((n - i) % i == 0 && (n - i) > 0)
        {
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