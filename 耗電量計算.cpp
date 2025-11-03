#include <bits/stdc++.h>
using namespace std;

int main() {
    int Ndata;
    cin >> Ndata;
    vector<long long> weight(Ndata);
    for (auto &w : weight) cin >> w;

    long long ans = 0, MOD = 1000000007;

    for(int i = 0; i < Ndata - 1; i++){
        int min_ind = i;
        for(int j = i+1; j < Ndata; j++){
            if(weight[j] < weight[min_ind]) {
              min_ind = j;
            }
        }

        long long cost = (long long)(min_ind - i) * (weight[min_ind] + weight[i]);
        ans = (ans + cost) % MOD;

        swap(weight[min_ind], weight[i]);
    }

    cout << ans % MOD << endl;
}
