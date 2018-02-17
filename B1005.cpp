#include <stdio.h>
#include <algorithm>

using namespace std;
 
bool cmp(int a,int b){
	return a>b;
}

int main(){
	int k;
	scanf("%d",&k);
	int a[k];
	int hashTable[100] = {0};
	int i;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
		int n = a[i];
		while(n!=1){
			if(n%2==0){
				n = n/2;
			}else{
				n = (3*n+1)/2;
			}
			//n是可能出现的数字，由于输入的是100内的，因此所有的关键数都是100内的 
			if(n<=100){
				hashTable[n] = 1;
			}
		}
	}
	int flag = 0;		//关键数的个数 
	for(i=0;i<k;i++){
		if(hashTable[a[i]]==0){
			flag++;
		}
	}
	sort(a,a+k,cmp);	//排序 
	
	if(flag ==0 ){		//特判没有关键数的时候 
		printf("\n");
		return 0;
	}
	for(i=0;i<k;i++){
		if(hashTable[a[i]]==0){
			printf("%d",a[i]);		//输出关键数 
			flag--;
			if(flag>0){
				printf(" ");
			}
		}
	}
	
	return 0;
}
