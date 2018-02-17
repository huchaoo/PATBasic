#include <stdio.h>
#include <string.h>

int main(){
	char n[110];
	gets(n);
	char py[][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int i;
	int sum=0;
	for(i=0;i<strlen(n);i++){
		sum += (n[i]-'0');
	}
	//将sum存在数组中，倒序存入 
	int res[10],num=0;
	while(sum!=0){
		res[num++] = sum%10;
		sum = sum/10;
	}
	//倒序输出 
	for(i=num-1;i>=0;i--){
		printf("%s",py[res[i]]);
		if(i>0){
			printf(" ");
		}
	}
	return 0;
}
