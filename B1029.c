#include <stdio.h>
#include <string.h>

int main(){
	char a[90];
	char b[90];
	scanf("%s",a);
	getchar();
	scanf("%s",b);
	int alen = strlen(a);
	int blen = strlen(b);
	int i,j;
	int flag;
	int index = 0;			//未出现的个数 
	char out[alen-blen];	//保存未出现的字符 
	for(j=0;j<alen;j++){	//寻找a中的每一个数是否在b中出现 
		flag = 0;
		for(i=0;i<blen;i++){
			if(a[j]==b[i]){
				flag = 1;	//出现了 
				break;
			}
		}
		if(flag==0){		//未出现 
			if(a[j]>='a' &&a[j]<='z'){
				a[j] = a[j] - 32;	//小写转大写 
			}
			out[index] = a[j];
			index++;
		}
	}
	for(i=0;i<index;i++){	
		for(j=0;j<i;j++){
			if(out[i]==out[j]){	//去除相同的字符 
				out[i] = '#';
			}
		}
	}
	for(i=0;i<index;i++){
		if(out[i]!='#'){
			printf("%c",out[i]);
		}
	}
	return 0;
}
