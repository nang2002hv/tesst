#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v[1001];
//v[i] dung luu danh sach ke cua dinh i. 

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int i = 1 ; i <= n; i++){
		cout <<i <<" : ";
		for (auto it : v[i]){
			cout << it <<" ";
		}
		cout << endl;
	}

}