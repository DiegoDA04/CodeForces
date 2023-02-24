#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        cin >> a;

        sort(a, a + n);

        cout << a[n - 1] - 'a'  + 1<< endl;
    }
    

    return 0;
}