#include <bits/stdc++.h>
using namespace std;

int main() {
    int base;
    cin >> base;
    int cost;
    vector<int> prices;

    while (cin >> cost) {
        prices.push_back(cost);
    }

    if (prices.empty()) {
        cout << 0;
        return 0;
    }

    int max_cost = *max_element(prices.begin(), prices.end());

    if (max_cost >= base)
        cout << max_cost;
    else
        cout << 0;
}
