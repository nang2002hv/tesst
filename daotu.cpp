#include<bits/stdc++.h>

using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
		stack <string> st;
		string s,tmp;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp){
			st.push(tmp);
		}
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
}