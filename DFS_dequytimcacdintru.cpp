#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int a[1001][1001],n,dem;
bool vist[1001];

void input(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void DFS_dequy(int i){
	vist[i]=true;
	for (int it = 1; it <= n; it++){
		if (!vist[it] && a[i][it]){
			DFS_dequy(it);
		}
	}
}


void duyet_tru(){
	cout << "cac dinh tru" << endl;
	memset(vist,false,sizeof(vist));
	int res = 0;
	int tplt = 0;
	for (int i = 1; i <= n; i++){
		if (!vist[i]){
			tplt++;
			DFS_dequy(i);
		}
	}
	for (int i = 1; i <= n; i++){
		memset(vist,false,sizeof(vist));
		vist[i] = true;
		dem = 0;
		for (int j = 1; j <= n; j++){
			if (!vist[j]){
				dem++;
				DFS_dequy(j);
			}
		}
		if (dem > tplt) cout << i << " ";
	}
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	input();
	duyet_tru();
}