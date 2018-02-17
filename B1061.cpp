#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	getchar();
	int i,j;
	int total[m];
	int ans[m];
	for(i=0;i<m;i++){
		scanf("%d",&total[i]);
	}
	getchar();
	for(i=0;i<m;i++){
		scanf("%d",&ans[i]);
	}
	getchar();
	for(i=0;i<n;i++){
		int score = 0;
		for(j=0;j<m;j++){
			int judge;
			scanf("%d",&judge);
			if(judge==ans[j]){
				score+=total[j];
			}
		}
		getchar();
		printf("%d\n",score);
	}
	return 0;
}
