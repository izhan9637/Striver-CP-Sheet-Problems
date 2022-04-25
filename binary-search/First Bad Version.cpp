// https://leetcode.com/problems/first-bad-version/

# include<bits/stdc++.h>
using namespace std;

// this is another binary search technique
// what is changed?
// FIRST THING: we used to set end as end = mid - 1, because we know that mid is greater than the number we are looking for
// so we search in first half of the array that is before mid.
// but in this case mid might be our candidate. 
// because If mid is bad version then there might be a bad version before it or maybe mid is the first bad version
// that's why we keep end = mid
// SECOND THING: We need to change while loop condition. start <= end to start < end.
// this is because If we use the loop condition as start <= end and If they both come down
// to a single element than the loop will never terminate because of the less than and equal operator(<=).
// ex: start = 2, end = 2 then mid will be 2 and this will go on.

int firstBadVersion(int n, int bad) {
    int start = 1;
    int end = n;
    while (start < end) {
        // to avoid overflow this is how we calculate mid
        int mid = start + (end - start) / 2;
        if(mid == bad) {
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    // number of versions
    int n = 2, bad = 2;
    cout << firstBadVersion(n, bad) << endl;
}
