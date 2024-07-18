#include "bits/stdc++.h"

using namespace std;

#define hana ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    hana;
    int n;

    map<int, int> unique;
    vector<int>order;
    while (cin >> n) {
        if (unique.find(n) == unique.end()) {
            order.push_back(n);
        }
             unique[n]++;
    }

    for (const auto& p : order) {
        cout << p << " " << unique[p] << "\n";
    }

    return 0;
}