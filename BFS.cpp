#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int a[1001][1001],n;
bool vist[1001];

void input(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	memset(vist,false,sizeof(vist));
}

void BFS_queue(int i){
	queue <int> q;
	q.push(i);
	vist[10] = true;
	vist[i] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v <<" ";
		for (int k = 1; k <= n; k++){
			if(!vist[k] && a[v][k]){
					q.push(k);
					vist[k] = true;
			}
		}
	}
}


main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	input();
	cout <<"BFS_queue" << endl;
	BFS_queue(1);
}