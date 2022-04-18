// https://codeforces.com/problemset/problem/151/A

# include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = k * l;
    int toasts = totalDrink / nl;
    int slicesOfLimes = c * d;
    int salt = p / np;
    int ans = min(toasts, min(slicesOfLimes, salt)) / n;
    cout << ans;
}
