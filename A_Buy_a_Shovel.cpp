#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define mpii map<int,int>
using namespace std;

void solve()
{
    int k, r;
    int ct = 1;
    int i = 1;
    cin >> k >> r;

    while (1)
    {
        if((k * i) % 10 == r || (k * i) % 10 == 0)
        {
            break;
        }
        ct++;
        i++;
    }
    cout << ct;
}

int main()
{
    
     solve();
    
    return 0;
}