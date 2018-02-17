#include <cstdio>
#include <cmath>

int isPrime(int x){		//判断一个数x是不是素数 
	int flag = 1;
	if(x<=1){
		flag = 0;
	}
	for(int i=2;i<=sqrt(x*1.0);i++){
		if(x%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int cnt=0;
	for(int i=2;i<=100000000;i++){			//最多可能10000个，因此需要最多循环100000000次 
		if(isPrime(i)){
			cnt++;
			if(cnt>=m&&cnt<=n){
				printf("%d",i);
				if((cnt-m+1)%10!=0&&cnt!=n){	//约束空格 
					printf(" ");
				}
				if((cnt-m+1)%10==0){			//约束换行 
					printf("\n");
				}
			}
			if(cnt>n){				//超过个数会break，因此不会影响复杂度 
				break;
			}
		}
	}
	return 0;
}
