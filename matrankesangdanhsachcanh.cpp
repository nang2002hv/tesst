#include<bits/stdc++.h>

using namespace std;

int n, a[1001][1001];

vector<pair<int, int>> v;

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = i+1; j <= n; j++){
			if (a[i][j] == 1){
				v.push_back({i,  j});
			}
		}
	}
	for (auto  it : v){
		cout << it.first << " " << it.second << endl;
	}
}