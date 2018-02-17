#include <cstdio>
#include <cstring>

int judge(char a[]){
	int flag = 0;
	int len = strlen(a);
	int l=0,m=0,r=0;
	int p=0,t=0,i;
	for(i=0;i<len;i++){
		if(a[i]=='P'){	//记下P出现的位置 
			p = i;
		}
		if(a[i]=='T'){	//记下T出现的位置 
			t = i;
		}
		if((a[i]!='A')&&(a[i]!='P')&&(a[i]!='T')){	//包含其他字符，说明答案错误 
			flag = 0;								//返回0 
			return flag;
		}
	}
	for(i=0;i<p;i++){
		if(a[i]=='A'){		//P左边A的个数 
			l++;
		}
	}
	for(i=p;i<t;i++){
		if(a[i]=='A'){		//PT中间A的个数 
			m++;
		}
	}
	for(i=t;i<len;i++){		
		if(a[i]=='A'){		//T右边A的个数 
			r++;
		}
	}
	if(l*m==r&&m!=0){		//如果l*m==r并且m!=0的话，说明是答案正确的 
		flag = 1;			//返回1 
	}
	return flag;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char a[110];
		scanf("%s",a);
		int flag = judge(a);
		if(flag){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
