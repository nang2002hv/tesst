#include<bits/stdc++.h>

using namespace std;

int tknp(int a[], int l, int r, int x){ // tim vi tri phan tu dau tien nho hon x
	int res = -1;
	while(l <= r){
		int mid =(l+r)/2;
		if(a[mid] < x){
			res = mid;
			l = mid+1;
		}
		else r = mid-1;
	}
	return res;
}

main(){
	int t ; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		int dem = 0;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				int k = tknp(a, j+1, n-1, m-a[i]-a[j]);
				k = k-j;
				if( k  > 0) dem+=k; 
			}
		}
		cout << dem << endl;
	}
}