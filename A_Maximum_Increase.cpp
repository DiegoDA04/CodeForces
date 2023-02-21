#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    int l = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i + 1] > a[i]) l++;
        if(l > ans) ans = l;
        if(a[i + 1] <= a[i]) l = 1;
    }
    
    cout << ans;
    
    return 0;
}