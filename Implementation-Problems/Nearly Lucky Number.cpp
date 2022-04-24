// https://codeforces.com/problemset/problem/110/A

# include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int luckyDigitCount = 0;

    while(n != 0) {
        if(n % 10 == 4 || n % 10 == 7) {
            luckyDigitCount++;
        }
        n /= 10;
    }
    if(luckyDigitCount == 4 || luckyDigitCount == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
