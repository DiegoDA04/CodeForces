#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int a[n*2];
        int even = 0, odd = 0;
        for(int i = 0 ; i < n * 2; i++) {
            cin >> a[i];
            
            if(a[i] % 2 == 0) even++;
            else odd++;
        }
        if(odd == even) cout << "Yes\n";
        else cout << "No\n";

    }


    return 0;
}