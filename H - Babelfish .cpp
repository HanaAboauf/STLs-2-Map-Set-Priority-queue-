#include <bits/stdc++.h>
using namespace std;

# define hana ios_base::sync_with_stdio (false), cin.tie(nullptr),cout.tie (nullptr);

void solve() {
    map<string,string>hay;
    string input;
    while(getline (cin, input)) {
        if(input.empty())
            break;
        string x,y;
        stringstream line (input);
        line>>x>>y;
        hay [y]=x;
    }
    while(cin>>input) {
        if (hay.count(input)>0) cout<<hay [input]<<'\n';
        else cout<<"eh"<<'\n';
    }
}
int main(){
    hana

    solve();

}
