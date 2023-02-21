#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int max = -1;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        ans += b - a;
        if(ans > max)
        {
            max = ans;
        }
    }
    
    cout << max;

    return 0;
}