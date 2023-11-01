#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[5];
int FirstPos(int a[], int l, int r, int x) {
	int res = -1;
	while(l <= r) {
		int m = (l+r)/2;
		if(a[m] > x) {
			res = m;
			r = m-1;
		}
		else l = m+1;
	}
	return res;
}

int Count(int y[], int n, int x) {
	if(x == 0) 
		return 0;
	if(x == 1)
		return cnt[0];
	ll res = cnt[0] + cnt[1];
	int l = FirstPos(y, 0, n-1, x);
	if(l != -1) {
		res += n-l;
	}
	if(x == 2) {
		res -= (cnt[4] + cnt[3]);
	}
	if(x == 3) {
		res += cnt[2];
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		int a[m], b[n];
		for(int i=0; i<m; i++) cin >> a[i];
		for(int i=0; i<n; i++) {
			cin >> b[i];
			if(b[i] <= 4) cnt[b[i]]++;
		}
		sort(b, b+n);
		ll ans = 0;
		for(int i=0; i<m; i++) {
			ans+= Count(b, n, a[i]);
		}
		cout << ans << endl;
		memset(cnt, 0, sizeof(cnt));
	}
} 
