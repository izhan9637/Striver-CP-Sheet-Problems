// https://codeforces.com/problemset/problem/1030/A

# include<bits/stdc++.h>
using namespace std;

int main() {
    int n, opinion;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> opinion;
        if(opinion == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
}
