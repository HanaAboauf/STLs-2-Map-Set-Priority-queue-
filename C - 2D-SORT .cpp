#include "bits/stdc++.h"

using namespace std;

#define hana         ios_base::sync_with_stdio(false);cin.tie(NULL);

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){
  hana
  int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<pair<int, int>> v(size);

        for (int i = 0; i < size; ++i) {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end(), compare);

        for (const auto& it : v) {
            cout << it.first << " " << it.second << "\n";
        }

        if (t > 0) cout << "\n";
    }

    return 0;
}