#include <stdio.h>
#include <string.h>

int main(){
	char s[100010];
	gets(s);
	int len = strlen(s);
	int n = 0;//十进制表示 
	int i;
	for(i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z'){
			//小写字母
			n += (s[i]-96);
		}
		if(s[i]>='A'&&s[i]<='Z'){
			//大写字母 
			n += (s[i]-64);
		}
	}
	if(n==0){
		printf("0 0");
	}else{
		//转二进制
		int cnt0 = 0,cnt1 = 1;
		while(n!=1){
			if(n%2==1){
				cnt1++;
			}else if(n%2==0){
				cnt0++;
			}
			n = n/2;
		}
		printf("%d %d",cnt0,cnt1);
	}
	return 0;
}
