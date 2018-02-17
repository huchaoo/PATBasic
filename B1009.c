#include <stdio.h>

int main(){
	char str[100][80];
	int i=0;
	
//	do{
//		scanf("%s",str[i]);
//		i++;
//	}while((getchar())!='\n');
//	//用该方法该结构判断一行内的输出是否结束 
	
	//或者这样
	while(scanf("%s",str[i])!=EOF){
		i++;
	}
	
	//倒叙输出 
	for(i = i-1;i>0;i--){
		printf("%s ",str[i]);
	}
	printf("%s",str[0]);
	
	return 0;
}

