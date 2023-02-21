#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int ct = 0;
    int freq[26] = {0};
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > 0){
            ct++;
        }
    }
    if(ct % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    

    return 0;
}