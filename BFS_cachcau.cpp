#include<bits/stdc++.h>

using namespace std;
int a[1001][1001],n, m;
bool vist[1001];

void input(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			a[i][j] = 0;
	}	
	for (int i = 1; i <= m; i++){
		int x, y; cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	memset(vist,false,sizeof(vist));
}

void DFS(int i, int &dem){
	vist[i] = true;
	dem++;
	for(int it = 1; it <= n; it++){
		if(!vist[it] && a[i][it])
			DFS(it, dem);
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
				int dem = 0;
				a[u][v]=0; a[v][u]=0;
				DFS(1, dem);
				if(dem < n)
					cout << u << " " << v << " ";
				a[u][v]=1; a[v][u]=1;
				memset(vist,false,sizeof(vist));
			}
		}
	}
}

main(){
	int t; cin >> t;
	while(t--){
		input();
		duyet_canh();
		cout << endl;
	}
}