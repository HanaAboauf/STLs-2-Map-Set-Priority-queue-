#include "bits/stdc++.h"

using namespace std;

#define hana ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    hana

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> one, two;

    for (int i = 0; i < m; ++i) {
        string a, b;
        cin >> a >> b;
        one[a] = b;
        two[b] = a;
    }

    vector<string> lecture(n);
    for (int i = 0; i < n; ++i) {
        cin >> lecture[i];
    }

    vector<string> res;
    res.reserve(n);

    for (const string &word : lecture) {
        string shorter_word = word;
        if (one.find(word) != one.end()) {
            string translated_word = one[word];
            if (translated_word.size() < word.size()) {
                shorter_word = translated_word;
            }
        }
        res.push_back(shorter_word);
    }

    for (const string &word : res) {
        cout << word << " ";
    }

    return 0;
}
