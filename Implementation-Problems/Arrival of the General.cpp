// https://codeforces.com/problemset/problem/144/A
# include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxElement = INT_MIN, maxPosition = 0;
    int minElement = INT_MAX, minPosition = 0;

    int height;
    for(int i = 0; i < n; i++) {
        cin >> height;
        if(height > maxElement) {
            maxElement = height;
            maxPosition = i;
        }
        if(height <= minElement) {
            minElement = height;
            minPosition = i;
        }
    }
    // If the leftmost soldier with max height is at the right to the rightmost soldier with minimum height
    if(maxPosition > minPosition) {
        cout << (maxPosition - 1) + (n - minPosition) - 1;
    }else {
        cout << (maxPosition - 1) + (n - minPosition);
    }
}
