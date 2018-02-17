#include <cstdio>

int main(){
	int n,d;
	double e;
	scanf("%d%lf%d",&n,&e,&d);
	int possible = 0;
	int empty = 0;
	for(int i=0;i<n;i++){
		int cnt = 0;
		int k;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			double t;
			scanf("%lf",&t);
			if(t<e){
				cnt++;
			}
		}
		if(cnt*1.0>k*0.5&&k<=d){
			possible++;
		}else if(cnt*1.0>k*0.5&&k>d){
			empty++;
		}
	}
	printf("%.1f%% %.1f%%%",possible*1.0/n*100,empty*1.0/n*100);
	return 0;
}
