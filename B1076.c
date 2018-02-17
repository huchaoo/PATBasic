#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();		//±ØĞëÒª 
	while(n--){
		char str[16];
		gets(str);
		int i;
		for(i=0;i<16;i++){
			if(str[i]=='T'){
				printf("%d",str[i-2]-64);
			}
		}
	}
	return 0;
}
