#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std; 

int main() {
    ll n, x;
    cin >> n >> x;
    int l = 0;
    while(n--) {
        char c;
        ll d;
        cin >> c >> d;
        
        if(c == '+') x +=d;
        else if(c == '-' && x >= d) x-= d;
        else l++;
    }
    cout << x << " " << l << "\n";
}