#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main() {
    fast_io
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        int minIndex, maxIndex;
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1) minIndex = i + 1;
            if(arr[i] == n) maxIndex = i + 1;
        }
        cout << min({ max(minIndex, maxIndex), n - min(maxIndex, minIndex) + 1, n - maxIndex + minIndex + 1, n - minIndex + maxIndex + 1}) << endl;
    }
    
    return 0;
}