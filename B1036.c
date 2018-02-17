#include <stdio.h>
#include <math.h>

int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int row;
//	row = round(n/2);
	row = round(n/2.0);
	int i,j;
	for(i=0;i<n;i++){
		printf("%c",c);
	}
	printf("\n");
	for(i=0;i<row-2;i++){
		printf("%c",c);
		for(j=0;j<n-2;j++){
			printf(" ");
		}
		printf("%c\n",c);
	}
	for(i=0;i<n;i++){
		printf("%c",c);
	}
	printf("\n");
	return 0;
}
