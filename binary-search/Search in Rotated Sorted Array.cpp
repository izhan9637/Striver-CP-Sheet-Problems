// https://leetcode.com/problems/search-in-rotated-sorted-array/

# include<bits/stdc++.h>
using namespace std;

int findTarget(int arr[], int element, int start, int end) {
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == element) return mid;

        else if(arr[start] <= arr[mid]){
            if(element >= arr[start] && element < arr[mid]) {
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        } else {
            if(element > arr[mid] && element <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findTarget(arr, target, 0, n-1);
}
