// https://codeforces.com/problemset/problem/1352/A

# include<bits/stdc++.h>
using namespace std;

// number 9876 can be represent as: 9*1000 + 8*100 + 7*10 + 6*1
// If some digit is zero then we don't care about it. example 5009: 5*1000 + 0*100 + 0*10 + 9*1
// so now we can just take the last digit (n % 10) and If it's greater than zero we multiply 
// it with the power of 10 and then remove this digit from n (n / 10).
// we do this until we left with single digit.

void solve(int t) {
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans;
        int pow = 1;
        while(n > 0) {
            if(n % 10 > 0) {
                ans.push_back((n % 10) * pow);
            }
            n = n / 10;
            pow *= 10;
        }
        cout << ans.size() << "\n";
        for(int num: ans){
            cout << num << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    solve(t);
}
