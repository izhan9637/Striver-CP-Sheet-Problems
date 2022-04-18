// https://codeforces.com/problemset/problem/263/A

# include<bits/stdc++.h>
using namespace std;

int main() {
    int ans;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int num;
            cin >> num;
            if(num == 1) {
                int x = abs(i-2);
                int y = abs(j-2);
                ans = x + y;
            }
        }
    }
    cout << ans;
}
