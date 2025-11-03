#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int n = s.size();
    int count = 1;

    for(int i = 1; i <= n; i++){
        if(i < n && s[i] == s[i-1]){
            count++;
        } else {
            cout << count << s[i-1];
            count = 1;
        }
    }
    return 0;
}
