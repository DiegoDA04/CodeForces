#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[k - 1] <= arr[i] && arr[i] > 0)
        {
            ct++;
        }
    }
    cout << ct << "\n";
    
    return 0;
}