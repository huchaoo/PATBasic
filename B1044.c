#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void earthToMar(char *s);
void marToEarth(char *s);

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char s[8];
	while(n!=0){
//		scanf("%s",s);
		gets(s);
		if(strlen(s)==1&&s[0]=='0'){
			printf("tret\n");
		}else{
			if(s[0]>='0'&&s[1]<='9'){
				//earthToMar
				earthToMar(s);
			}else{
				//marToearth
				marToEarth(s);
			}
		}
		n--;
	}
	return 0;
}

void earthToMar(char *s){
	int a = atoi(s);
	char bs[][4] = {"###","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	char cs[][4] = {"###","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	int b,c;
	b = a/13;
	c = a%13;
	if(a<=12){
		printf("%s\n",cs[a]);
	}else if(a%13==0){
		printf("%s\n",bs[b]);
	}else{
		printf("%s %s\n",bs[b],cs[c]);
	}

}

void marToEarth(char *s){
	int len = strlen(s);
	char b[][3] = {"###","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	char c[][3] = {"###","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	int j;
	if(len==3){
		for (j = 1; j <= 12; j++) {
            if(s[0]==c[j][0]&&s[1]==c[j][1]&&s[2]==c[j][2]){
                printf("%d\n",j);
            }else if(s[0]==b[j][0]&&s[1]==b[j][1]&&s[2]==b[j][2]){
                printf("%d\n",j*13);
            }
        }
	}else{
		int t1=0;
        int t2=0;
        int j;
        for(j=1;j<=12;j++){
            if(s[0]==b[j][0]&&s[1]==b[j][1]&&s[2]==b[j][2]){
                t1=j;
            }
            if(s[4]==c[j][0]&&s[5]==c[j][1]&&s[6]==c[j][2]){
                t2=j;
            }
        }
        printf("%d\n",t1*13+t2);
	}
}

