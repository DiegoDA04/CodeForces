#include<bits/stdc++.h>

using namespace std;

int main() {   
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n];

        int odd = 0, even = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }
        if(sum % 2 == 1) cout << "YES\n";
        else {
            if(odd == 0 || even == 0) cout << "NO\n";
            else cout << "YES\n";
        }

        
    }
    
    return 0;
}