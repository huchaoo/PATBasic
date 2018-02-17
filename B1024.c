#include <stdio.h>
#include <string.h>

int main(){
	char str[10010];
	gets(str);
	if(str[0]=='-'){
		printf("-");
	}
	int pos,i,len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='E'){
			pos = i;//存放E的位置 
			break;
		}
	}
	int exp=0;//指数
	for(i=pos+2;i<len;i++){
		exp = exp*10+(str[i]-'0');//保存指数的整数值 
	}
	if(exp==0){
		//指数为0，直接输出E之前字符的就行
		for(i=0;i<pos;i++){
			printf("%c",str[i]);
		} 
	}
	if(str[pos+1]=='-'){
		//指数为负，则输出格式是0.XXXXXX
		printf("0.");
		for(i=0;i<exp-1;i++){
			printf("0");//输出小数点后的exp-1个0 
		}
		for(i=1;i<pos;i++){
			if(str[i]!='.'){
				printf("%c",str[i]);//输出除了小数点的其他字符 
			}
		}
	}else{
		//指数为正
		for(i=1;i<pos;i++){
			if(str[i]!='.'){
				printf("%c",str[i]);//输出除了小数点的其他字符 
			}
			if(i==exp+2 && pos-3!=exp){	//小数点移动位置不够，继续输出小数点 
				//小数点后移exp位(原来为第2位，即现在为exp+2位)，如果刚好移动到最后一位(pos-3==exp)也不用输出. 
				printf("."); 
			}
		}
		//如果指数过大，输出多余的0
		for(i=0;i<exp-(pos-3);i++){
			printf("0");
		}
	}
	return 0;
}
