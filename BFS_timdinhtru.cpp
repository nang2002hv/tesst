#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int a[1001][1001],n, dem;
bool vist[1001];

void input(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void BFS_queue(int i){
	queue <int> q;
	q.push(i);
	vist[i] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for (int k = 1; k <= n; k++){
			if(!vist[k] && a[v][k]){
					q.push(k);
					vist[k] = true;
			}
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
			BFS_queue(i);
		}
	}
	for (int i = 1; i <= n; i++){
		memset(vist,false,sizeof(vist));
		vist[i] = true;
		dem = 0;
		for (int j = 1; j <= n; j++){
			if (!vist[j]){
				dem++;
				BFS_queue(j);
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

	//comment
	//co2411241421424
}