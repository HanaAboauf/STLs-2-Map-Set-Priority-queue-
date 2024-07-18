#include "bits/stdc++.h"

using namespace std;

#define hana ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    hana;
    int n, m, x;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }

        map<int, int> mp;
        int g = n + m;
        for (int i = 0; i < g; ++i) {
            cin >> x;
            mp[x]++;
        }

        int c = 0;
        for (const auto& p : mp) {
            if (p.second > 1) {
                c++;
            }
        }
        cout << c << "\n";
    }

    return 0;
}