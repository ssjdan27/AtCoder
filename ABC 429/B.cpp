#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for(int &b: a){
        cin >> b;
        sum += b;
    }

    for(int b: a){
        if(sum - b == m){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";

    return 0;
}