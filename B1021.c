//利用字符数组完成 
#include <stdio.h>
#include <string.h>

int main(){
	char a[1010];
	int len;
	scanf("%s",a);			//输入数据 
	int b[10] = {0};
	len = strlen(a);		//得到数组的长度 
	int i;
	for(i=0;i<len;i++){
		//利用数组下标保存数据
		b[a[i]-'0']++; 
	}
	for(i=0;i<10;i++){
		if(b[i]!=0){
			printf("%d:%d\n",i,b[i]);
		}
	}
	return 0;
}
