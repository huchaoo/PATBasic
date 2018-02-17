#include <cstdio>
#include <cmath>

int isPrime(int x){
	int flag = 1;
	if(x<=1) {
		flag = 0;
	}
	for(int i=2;i<=sqrt(x*1.0);i++){
		if(x%i==0){
			flag = 0;
		}
	}
	return flag;
}

int main(){
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for(int i=2;i+2<=n;i++){	//注意循环终止的条件是i+2<=n；必须保证i和i+2都在n的范围内 
		if(isPrime(i)&&isPrime(i+2)){
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
