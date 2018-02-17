#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	long long a,b,c;
	for(i=0;i<n;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true\n",i+1);
		}else{
			printf("Case #%d: false\n",i+1);
		}
	}
	return 0;
}
