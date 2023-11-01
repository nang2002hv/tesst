#include<bits/stdc++.h>

using namespace std;

int n, a[100][100];

void docfile(){ //Dung de doc file, sau do gan vao mang a[][]
    ifstream dothi ("input.txt");
    if (dothi.is_open())
    {
        dothi >> n;
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= n; j++){
        		cin >> a[i][j];
        	}
        }
        dothi.close();
    }
    else cout << "Khong mo duoc file";
}

int Bac(int a[100][100])
{
    int d[n+1];
    for(int i=1;i<=n;i++)
    {
        d[i]=0;
        for(int j=1;j<=n;j++)
        d[i]=d[i]+a[i][j];
    }
    return d;
}
void swap(int &a,int &b)
{
    int t=a;a=b;b=t;
}

void sx(int n,int d[n],int id[n+1])
{
    int i,j;
    for(i=1;i<=n;i++) id[i]=i;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        if(d[i]<d[j])
        {
            swap(d[i],d[j]);
            swap(id[i],id[j]);
        }
}
void tomau()
{
    m[n+1];
    int id[n+1],id[n+1],i,j,k=0;
    d=Bac(n,a);
    sx(n,d,id);
    for(i=1;i<=n;i++) m[i]=0;
    for(i=1;i<=n;i++)
    if(m[id[i]]==0)
    {
        k++;
        m[id[i]]=k;
        for(j=i+1;j<=n;j++)
        if(m[id[j]]==0)
        {
            int t;
            for(t=1;t<=n;t++)
            if(m[t]==k && a[id[j]][t]>0) break;
            if(t>n) m[id[j]]=k;
        }
    }
    cout << "So mau su dung la " << k << endl;
    for(j=1;j<=k;j++)
    {
        cout << "\nMau "<< j << ": ";
        for(i=1;i<=n;i++)
        if(m[i]==j) cout << " " << i <<" ";
    }
}
 main()
{

    docfile();
    tomau();
}