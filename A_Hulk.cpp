#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i< n; i++)
    {
        if(i % 2 == 1)
        {
            cout << "I love ";
        }else{
            cout << "I hate ";
        }
        if(i != n - 1) cout << "that ";
    }
    cout << "it";
}

int main()
{

    solve();

    return 0;
}