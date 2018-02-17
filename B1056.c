#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int a[n];
	int sum = 0;
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
//			sum += (a[i]*10+a[j]);
			if(j!=i){
				sum += (a[i]*10+a[j]);
			}
		}
	}
//	for(i=0;i<n;i++){
//		sum -= (a[i]*10+a[i]);
//	}
	printf("%d",sum);
	return 0;
}
