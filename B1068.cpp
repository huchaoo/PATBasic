//边界上的点需要考虑
//差值不一定是正的
//点是唯一的 
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int m,n,tol;
	scanf("%d%d%d",&m,&n,&tol);
	int a[n+1][m+1];
	memset(a,0,sizeof(a));
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			mp[a[i][j]]++;
		}
	}
	int cnt = 0;
	int y,x;
	int pt;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int flag = 0;
			if((abs(a[i][j]-a[i-1][j-1])>tol)&&(abs(a[i][j]-a[i-1][j])>tol)&&(abs(a[i][j]-a[i-1][j+1])>tol)&&(abs(a[i][j]-a[i][j-1])>tol)&&(abs(a[i][j]-a[i][j+1])>tol)&&(abs(a[i][j]-a[i+1][j-1])>tol)&&(abs(a[i][j]-a[i+1][j])>tol)&&(abs(a[i][j]-a[i+1][j+1])>tol)){
				flag = 1;
			}
			if(flag==1&&mp[a[i][j]]==1){
				cnt++;
				pt = a[i][j];
				y = j;
				x = i;
			}
		}
	}
	if(cnt==0){
		printf("Not Exist");
	}else if(cnt==1){
		printf("(%d, %d): %d",y,x,pt);
	}else{
		printf("Not Unique");
	}
	return 0;
}
