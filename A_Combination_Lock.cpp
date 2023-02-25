#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min({abs(a[i] - b[i]) , abs((a[i] - '0') + ('9' - b[i])) + 1 , abs('9'- a[i]) + abs(b[i] - '0') + 1});
    }
    
    cout << ans;
    
}