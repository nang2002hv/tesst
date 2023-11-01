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
	
}

void DFS_dequy(int i){
	cout << i <<" ";
	vist[i]=true;
	for (int it = 1; it <= n; it++){
		if (!vist[it] && a[i][it]){
			DFS_dequy(it);
		}
	}
}

void DFS_stack(int i){
	vist[i] = true;
	stack<int> st;
	st.push(i);
	cout << i << " ";
	while(!st.empty()){
		int s = st.top();
		st.pop();
        for (int v = 1; v <= n; v++){
            if (!vist[v] && a[s][v]){
            	cout << v <<" ";
            	vist[v] = true;
            	st.push(s);
            	st.push(v);
            	break;

            }
        }
	}
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	input();
	memset(vist,false,sizeof(vist));
	cout <<"DFS_dequy" << endl;
	DFS_dequy(1);
	cout << endl << "DFS_stack" << endl;
	memset(vist,false,sizeof(vist));
	DFS_stack(1);
}