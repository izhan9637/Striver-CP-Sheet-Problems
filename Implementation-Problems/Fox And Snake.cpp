// https://codeforces.com/problemset/problem/510/A

// Time complexity quadratic
// space constant (we are only using few variables)

# include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // we can use these row and col flag to draw this pattern
    bool row = true;
    bool col = true;

    for(int i = 0; i < n; i++) {
        // when row flag is true we can print all # in a row
        if(row) {
            for(int j = 0; j < m; j++) {
                cout << "#";
            }
            row = false;
        } else{
            // now with col there are 2 cases
            // In case 1 we have to print like this: ..#
            // In case 2 we have to print like this: #..

            // this is case 1 and in else we are doing case 2
            if(col) {
                for(int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
                cout << "#";
                col = false;
            }else {
                cout << "#";
                for(int j = 1; j < m; j++) {
                    cout << ".";
                }
                col = true;
            }
            row = true;
        }
        cout << "\n";
    }
}
