// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

# include<bits/stdc++.h>
using namespace std;

void getRange(vector<int>& nums, int target, int start, int end, vector<int>& ans, bool isLeft) {
     while(start <= end) {
            int mid = start + (end - start) / 2;
            if(target > nums[mid]) {
                start = mid + 1;
            } else if(target < nums[mid]) {
                end = mid - 1;
            } else {
                if(isLeft) {
                    if(mid == 0 || nums[mid - 1] != target) {
                        ans[0] = mid;
                        return;
                    } else {
                        end = mid - 1;
                    }
                } else {
                    if(mid == end || nums[mid+1] != target) {
                        ans[1] = mid;
                        return;
                    } else {
                        start = mid + 1;
                    }
                }
            }
        }
}

int main() {
    vector<int> arr{5,7,7,8,8,10};
    int target = 8;
    vector<int> ans{-1, -1};
    int len = arr.size();
    getRange(arr, target, 0, len - 1, ans, true);
    getRange(arr, target, 0, len - 1, ans, false);
    cout << ans[0] << "  " << ans[1];
}
