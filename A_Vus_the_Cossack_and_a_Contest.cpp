#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    cout << (min(m,k) >= n ? "Yes\n" : "No\n");

    return 0;
}