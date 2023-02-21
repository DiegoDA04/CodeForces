#include<bits/stdc++.h>

using namespace std;

bool esPrimo(int numero) {
  
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
  
  return true;
}

int nextPrime(int l){
    for(int i = l + 1; i <= 50; i++)
    {
        if(esPrimo(i)) return i;
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    if(nextPrime(n) == m) cout << "YES";
    else cout << "NO";

}