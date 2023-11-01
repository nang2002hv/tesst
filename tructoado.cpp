#include <bits/stdc++.h>
using namespace std;
struct CV {
	int start, finish;
};
int cmp(CV a, CV b) {
	return a.finish < b.finish;
}
main()
{
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	CV a[n];
    	for(int i=0; i<n; i++) {
    		cin >> a[i].start >> a[i].finish;
		}
		sort(a, a+n, cmp);
		int d=1, i=0;
		for(int j=1; j<n; j++) {
			if(a[j].start >= a[i].finish) {
				d++;
				i = j;
			}
		}
		cout << d << endl;
	}
}

