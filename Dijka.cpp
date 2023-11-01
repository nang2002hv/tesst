/* S cố định, t thay đổi
-đối với đồ thị có trọng số không âm, bài toán luôn có lời giải bằng thuật toán dijka
-đối với đồ thị có trọng số ấm nhưng không tồn tại chung trình âm, bài taons có lời giải bằng thuật toán bellman- ford
-trong trường hợp đồ thị có chung trình âm bài toán không có lời  giải, lúc này ta phải dùng thuật toán floyd

Dijkstra (𝑠){
	Bước 1 (Khởi tạo):
	𝑑[𝑠] = 0; //Gán nhãn của đỉnh 𝑠 là 0
	𝑇 = 𝑉\{𝑠}; // 𝑇 là tập đỉnh có nhãn tạm thời
	for (𝑣 ∈ 𝑉){ //Sử dụng 𝑠 gán nhãn cho các đỉnh còn lại
		𝑑[𝑣] = 𝑎(𝑠, 𝑣);
		𝑡𝑟𝑢𝑜𝑐[𝑣] = 𝑠;
	}
	Bước 2 (Lặp):
	while (𝑇 ≠ ∅ ){
		Tìm đỉnh 𝑢 ∈ 𝑇 sao cho 𝑑[𝑢] = min{ 𝑑[𝑧] | 𝑧 ∈ 𝑇};
		𝑇 = 𝑇\{𝑢}; //cố định nhãn đỉnh 𝑢
		for (𝑣 ∈ 𝑇){ //Sử dụng 𝑢, gán nhãn laị cho các đỉnh
			if (𝑑[𝑣] > 𝑑[𝑢] + 𝑎(𝑢, 𝑣)){
				𝑑[𝑣] = 𝑑[𝑢] + 𝑎(𝑢, 𝑣); //Gán lại nhãn cho đỉnh 𝑣;
				𝑡𝑟𝑢𝑜𝑐[𝑣] = 𝑢;
			}
		}
	}
}
*/
#include<bits/stdc++.h>

using namespace std;

int a[100][100],n;

const INF = 1e9;

void input(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j ++){
			cin >> a[i][j];
		}
	}
}

void Dijkstra(int i) {
	vector<ll> d(n+1, INF);
	d[s] = 0;
	priority_queue<pair<int,int>, vector<pair<int, int>,greater<pair<int,int>>> Q; // lay ra phan tu nho nhat
	Q.push({0,s});
	

}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	input();
}