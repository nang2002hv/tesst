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
	vist[i] = true;
	cout << i << " ";
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for (int k = 1; k <= n; k++){
			if(!vist[k] && a[v][k]){
					q.push(k);
					vist[k] = true;
					cout << k <<" ";
			}
		}
	}
}

int Test_So_Lien_Thong() {
	for(int u=1; u<=n; u++)
		if(!vist[u]) return(1);
	return(0);
}


void duyet_canh(){
	for (int u=1; u<n; u++){
		for(int v=u+1;v<=n; v++){
			if(a[u][v]) { 
				cout <<"canh cau "<<u<<","<<v <<":";
				a[u][v]=0; a[v][u]=0;
				BFS_queue(1);
				cout << endl;
				//if(Test_So_Lien_Thong())
				//cout << u << " " << v << endl;
				a[u][v]=1; a[v][u]=1;
				memset(vist,false,sizeof(vist));
			}
		}
	}
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	input();
	duyet_canh();
}