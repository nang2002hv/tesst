#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int a[1001][1001],n;

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
		for (int j = 1; j <= n; j++){
			if (a[i][j]){
				adj[i].push_back(j);
			}
		}
	}
	for (int i = 1; i <=n; i++){
		cout << i << " : ";
		for (auto it : adj[i])
			cout << it <<" ";
		cout << endl;
	}

}