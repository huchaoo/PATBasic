#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int i;
	int a,b,c,d;
	int count1=0,count2=0;
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		getchar();
		if(b==(a+c)&&d!=(a+c)){
			count2++;
		}else if(d==(a+c)&&b!=(a+c)){
			count1++;
		}
	}
	printf("%d %d",count1,count2);
	return 0;
}
