#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	getchar();
	char name[n][20];
	char num[n][20];
	int grade[n];
	int i;
	int max=0;
	int maxps;
	int min=100;
	int minps;
	for(i=0;i<n;i++){
		scanf("%s %s %d",name[i],num[i],&grade[i]);
		getchar();
		if(grade[i]>=max){
			max = grade[i];
			maxps = i;
		}
		if(grade[i]<=min){
			min = grade[i];
			minps = i;
		}
	}
	printf("%s %s\n",name[maxps],num[maxps]);
	printf("%s %s",name[minps],num[minps]);
	return 0;
}
