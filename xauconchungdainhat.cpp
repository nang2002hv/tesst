#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.length(), m =  s2.length();
		int a[n+5][m+5], ans = 0;
		memset(a,0,sizeof(a));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1]+1;
				else a[i][j] = max(a[i-1][j],a[i][j-1]);
				ans = max(ans,a[i][j]);
			}
			
		}
		cout << ans << endl;
	}
}