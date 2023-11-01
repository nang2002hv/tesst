#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int a[MAX][MAX]={0}, u,n;
void laydulieu(){
   ifstream file;
   file.open("matrix.txt");
    file>>n;
    int t=n,h=0,k=1;
    while(t--){
    	int j=h+1;
    	int m;
    	file>>m;
    	
    for(int i=j; i<=m; i++){
    	int w;
    	file>>w;
         a[k][w]=1;
	}
	k++;
	h=m;
  }
  file.close();
}
bool Kiemtra(){
	
	for(int j=1;j<=n;j++){
		int s1=0,s2=0;
		for(int i=1;i<=n;i++){
        	s1+=a[j][i];
        	s2+=a[i][j];
		}
		if(s1!=s2) return false;
	}
	return true;
}
void EULER(){
           int v, x, top, dCE;
           int stack[MAX], CE[MAX];
           top=1; stack[top]=u;dCE=0;
   do {
           v = stack[top];x=1;
    while (x<=n && a[v][x]==0)
          x++;
         if (x>n) {
           dCE++; CE[dCE]=v; top--;
         }
        else {
          top++; stack[top]=x;
          a[v][x]=0; a[x][v]=0;
        }
      } 
   while(top!=0);
     cout<<"Co duong di Euler:" ;
   for(x=dCE; x>0; x--)
     cout<<CE[x]<<" ";
}
main(){
	laydulieu();
      cout<<"Nhap dinh bat dau: ";
      cin>>u;
     if(Kiemtra())
           EULER();
     else cout<<"Khong co duong di Euler";
}
