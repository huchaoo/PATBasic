#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char a[12];
	char b[12];
	int da,db;
	scanf("%s %d %s %d",&a,&da,&b,&db);
	getchar();
	int pa=0,pb=0;
	int counta=0,countb=0;
	int i;
	for(i=0;i<strlen(a);i++){
		if(a[i]==(da+'0')){
			counta++;
			pa += da*(int)pow(10.0,counta-1);
		}
	}
	for(i=0;i<strlen(b);i++){
		if(b[i]==(db+'0')){
			countb++;
			pb += db*(int)pow(10.0,countb-1);
		}
	}
	printf("%d",pa+pb);
	return 0;
}
