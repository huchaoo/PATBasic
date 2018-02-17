#include <cstdio>

int main(){
	int a[1010] = {0};
	int k,e;
	int cnt = 0;
	while(scanf("%d%d",&k,&e)!=EOF){
		//printf("%d %d ",k,e);
		a[e] = k;
	}
	a[0] = 0;
	for(int i=1;i<=1000;i++){
		a[i-1] = a[i]*i;
		a[i] = 0;
		if(a[i-1]!=0){
			cnt++;
		}
	}
	if(cnt==0){
		printf("0 0");
	}else{
		for(int i=1000;i>=0;i--){
			if(a[i]!=0){
				printf("%d %d",a[i],i);
				cnt--;
				if(cnt!=0){
					printf(" ");
				}
			}
		}	
	}
	return 0;
}
