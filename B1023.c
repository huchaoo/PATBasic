#include <stdio.h>

int main()
{
	int a[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	int i,j;
	//first output min number expect 0
	for(i=1;i<=9;i++){
		if(a[i]!=0){
			printf("%d",i);
			a[i]=a[i]-1;
			break;
		}
	}
	//then output the sequence from 0 to 9
	for(i=0;i<=9;i++){
		if(a[i]!=0){
			for(j=0;j<a[i];j++){
				printf("%d",i);
			}
		}
	}
	return 0;
}
