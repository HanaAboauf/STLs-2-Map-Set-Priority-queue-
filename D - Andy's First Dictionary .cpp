#include "bits/stdc++.h"

using namespace std;

int main() {
    set<string> dic;
    string s, word;

    while (cin >> s) {
        word.clear();
        for (char c: s) {
            if (isalpha(c)) {
                word += tolower(c);
            } else if (!word.empty()) {
                dic.insert(word);
                word.clear();
            }
        }
        if (!word.empty()) {
            dic.insert(word);
        }
    }

    for (const auto& w : dic) {
        cout << w << endl;
    }

    return 0;
}