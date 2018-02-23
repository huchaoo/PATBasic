#include <cstdio>

int main(){
	int m,n,a,b,s;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&s);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int t;
			scanf("%d",&t);
			if(t>=a&&t<=b){
				t = s;
			}
			printf("%03d",t);
			if(j!=(n-1)){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
