#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int i;
	int team[1000] = {0};
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d-%d %d",&a,&b,&c);
		team[a] += c;
	}
	int max=0;
	int maxflag = 0;
	for(i=0;i<1000;i++){
		if(team[i]!=0&&team[i]>max){
			max = team[i];
			maxflag = i;
		}
	}
	printf("%d %d",maxflag,max);
	return 0;
}
