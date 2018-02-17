#include <stdio.h>
#include <string.h>

int findMax(int a,int b,int c,int d,int e,int f){
	int max=0;
	if(a>=max){
		max = a;
	}
	if(b>=max){
		max = b;
	}
	if(c>=max){
		max = c;
	}
	if(d>=max){
		max = d;
	}
	if(e>=max){
		max = e;
	}
	if(f>=max){
		max = f;
	}
	return max;
}

int main(){
	char s[10001];
	scanf("%s",s);
	int len = strlen(s);
	int i;
	//PATest
	int cP=0,cA=0,cT=0,ce=0,cs=0,ct=0;
	for(i=0;i<len;i++){
		if(s[i]=='P'){
			cP++;
		}
		if(s[i]=='A'){
			cA++;
		}
		if(s[i]=='T'){
			cT++;
		}
		if(s[i]=='e'){
			ce++;
		}
		if(s[i]=='s'){
			cs++;
		}
		if(s[i]=='t'){
			ct++;
		}
	}
	int max = findMax(cP,cA,cT,ce,cs,ct);
	while(max!=0){
		if(cP!=0){
			printf("P");
			cP--;
		}
		if(cA!=0){
			printf("A");
			cA--;
		}
		if(cT!=0){
			printf("T");
			cT--;
		}
		if(ce!=0){
			printf("e");
			ce--;
		}
		if(cs!=0){
			printf("s");
			cs--;
		}
		if(ct!=0){
			printf("t");
			ct--;
		}
		max--;
	}
	return 0;
}
