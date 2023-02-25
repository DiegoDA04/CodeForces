#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = 2, b = 3, c = 1;

        int dif = (n - 6) / 3;
        int res = (n - 6) % 3;

        if(dif > 0){
            a += dif;
            b += dif;
            c += dif;
        }

        if(res == 1) b++;
        if(res == 2) {
            a++;
            b++;
        }
        
    
        cout << a << " " << b << " " << c << "\n";
    }
    

    return 0;
}