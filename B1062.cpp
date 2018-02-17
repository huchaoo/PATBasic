#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}
//1.边界问题
//2.分数大小问题
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	if(n1*m2>n2*m1){				
		swap(n1,n2);
		swap(m1,m2);
	}
	int d1;
//	d1 = (int)ceil(n1*k*1.0/m1);
	d1 = n1*k/m1+1;					//开始的边界，由于不能包括两个分数，所以要避免使用ceil和floor 
//	d2 = (int)floor(n2*k*1.0/m2);
	int cnt = 0;
	for(int i=d1;i*m2<n2*k;i++){	//如果用想下取整作为结束的边界的话也会有错误，i*m2<n2*k作为结束的边界 
		if(gcd(i,k)==1){ 
			if(cnt!=0) printf(" ");
			printf("%d/%d",i,k);
			cnt++;
		}
	}
	return 0;
}
