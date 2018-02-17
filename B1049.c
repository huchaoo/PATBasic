#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int i;
	double a;
	double sum=0.0;
	for(i=0;i<n;i++){
		scanf("%lf",&a);
		sum += a*(n-i)*(i+1);
	}
	printf("%.2f",sum);
	return 0;
}
