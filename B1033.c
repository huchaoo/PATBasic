#include <stdio.h>
#include <string.h>
//第一行有可能为空，scanf函数无法检测到这种空行，因此用gets函数
 
int main(){
	char unable[100];
//	scanf("%s",unable);
	gets(unable);
	char should[100001];
//	scanf("%s",should);
	gets(should);
	int ulen = strlen(unable);
	int slen = strlen(should);
//	printf("%d %d\n",ulen,slen);
	if(ulen==0){				//第一行没有输入时，特判直接输出第二行即可 
		printf("%s",should);
		return 0;
	}
	int i,j;
	for(i=0;i<slen;i++){
		for(j=0;j<ulen;j++){
			if(should[i]==unable[j]){	//.坏了的键直接出现在应该出现字符串中，则无法输出
				should[i] = '#';
			}
			if((unable[j]=='+')&&(should[i]>='A'&&should[i]<='Z')){	//'+'出现在坏了的键中，代表大写字母无法输出，注意是无法输出，而不是只能输出小写 
				should[i] = '#';
			}
			if((unable[j]>='A'&&unable[j]<='Z')&&(should[i]-32==unable[j])){ //坏了的键中的大写字母是代表英文键，因此这些字母对应的大写或小写都无法输出
				should[i] = '#';
			}
		}
	}
	int flag = 0;
	for(i=0;i<slen;i++){
		if(should[i]!='#'){
			printf("%c",should[i]);
			flag++;
		}
	}
	if(flag==0){
		printf("\n");
	} 
	return 0;
} 
