#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}
int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	if(N==1){
		printf("%d",a[0]);
		return 0;
	}
	//sort
	sort(a,a+N,cmp);
	//find m,n
	int m,n;
	for(int i=1;i<=sqrt(N*1.0);i++){
		if(N%i==0){
			n = i;
			m = N/i;
		}
	}
	//fill in
	int b[m+1][n+1];
	int cnt = 0;
	int i = 1,j = 1;
	int u = 1,d = m,l = 1,r = n;
	while(cnt<N){
		while(cnt<N&&j<r){
			b[i][j] = a[cnt++];
			j++;
		}
		while(cnt<N&&i<d){
			b[i][j] = a[cnt++];
			i++;
		}
		while(cnt<N&&j>l){
			b[i][j] = a[cnt++];
			j--;
		}
		while(cnt<N&&i>u){
			b[i][j] = a[cnt++];
			i--;
		}
		u++,d--,l++,r--;
		i++,j++;
		if(cnt == N-1){
			b[i][j] = a[cnt++];
		}
	}
	//output
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%d",b[i][j]);
			if(j%n!=0){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
