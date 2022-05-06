// https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1/

# include<bits/stdc++.h>
using namespace std;

// returns -1 when root is not an integer
int NthRoot(int n, int m)
    {
	long long start = 1, end = m;
	while (start <= end) {
	    long long p = 1;
	    long long mid = start + (end - start) / 2;
	        
	    for(int i = 1; i<= n ;i++){
	        p *= mid;
	        if(p>m)break;
	    }
	        
	    if(p == m) {
	        return mid;
	    } else if(p > m) {
	        end = mid - 1;
	    } else {
	        start = mid + 1;
	    }
	}
	return -1;
}  
