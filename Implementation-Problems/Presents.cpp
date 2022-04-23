// https://codeforces.com/problemset/problem/136/A

# include<bits/stdc++.h>
using namespace std;

int main() {
    int n, pi;
    cin >> n;

    map<int, int> m;
    for (int i = 1; i <= n; i++) {
        cin >> pi;
        m.insert(pair<int, int>(pi, i));
    }

    for(int i = 1; i <= n; i++) {
        cout << m[i] << " ";
    }
}
