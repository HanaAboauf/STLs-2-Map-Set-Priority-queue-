#include "bits/stdc++.h"
using namespace std;
int main() {
    string s;
    set<char>ss;
    getline(cin,s);
    for(char c:s) {
        if(c>='a' and c<='z')
            ss.insert(c);
    }
    cout<<ss.size();
}