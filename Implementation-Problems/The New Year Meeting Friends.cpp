// https://codeforces.com/problemset/problem/723/A

# include<bits/stdc++.h>
using namespace std;

int main() {
    int friendsLocation[3];
    cin >> friendsLocation[0] >> friendsLocation[1] >> friendsLocation[2];
    
    // the friend in the left side and friend on the right side
    // has to go to the middle
    sort(friendsLocation, friendsLocation + 3);
    cout << friendsLocation[2] - friendsLocation[0];
}
