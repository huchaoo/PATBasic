#include <stdio.h>
#include <string.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	getchar();
	m = m%n;
	int a[n];
	int b[n];
	memset(b,0,sizeof(b));
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[(i+m)%n] = a[i];
	}
	for(i=0;i<n;i++){
		if(i>0){
			printf(" ");
		}
		printf("%d",b[i]);
	}
	return 0;
}
