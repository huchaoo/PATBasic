//利用数组 
#include <stdio.h>
#include <string.h>

int main(){
	char a[5];
	scanf("%s",a);
	int len = strlen(a);
	int i,j;
	for(i=0;i<len;i++){
		if(len-i-1==2){//百位 
			for(j=0;j<a[i]-'0';j++){
				printf("B");
			}
		}else if(len-i-1==1){//十位 
			for(j=0;j<a[i]-'0';j++){
				printf("S");
			}
		}else if(len-i-1==0){//个位 
			for(j=0;j<a[i]-'0';j++){
				printf("%d",j+1);
			}
		}
	}
	return 0;
}
