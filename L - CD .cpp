#include "bits/stdc++.h"

using namespace std;

#define hana ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    hana;
    int n, m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }

        vector<int> jack(n),jill(m);

        for (int i = 0; i < n; ++i) {
            cin >> jack[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> jill[i];
        }

        int i = 0, j = 0, common_count = 0;

        while (i < n && j < m) {
            if (jack[i] == jill[j]) {
                common_count++;
                i++;
                j++;
            } else if (jack[i] < jill[j]) {
                i++;
            } else {
                j++;
            }
        }

        cout << common_count << "\n";
    }

    return 0;
}