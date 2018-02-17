#include <stdio.h>
#include <string.h>

int main(){
	
	int amount[123] = {0};
	
	char sale[1000];
	scanf("%s",sale);
	
	int i,j;
	for(i=0;i<strlen(sale);i++){
		for(j=0;j<123;j++){
			if(sale[i]==j){
				amount[j]++;
			}	
		}
	}
	
	char want[1000];
	scanf("%s",want);
	
	int flag=1;
	int count=0;
	for(i=0;i<strlen(want);i++){
		if(amount[want[i]]==0){	//dont' have
			flag=0;
			count++;
		}else{		//have
			amount[want[i]]--;
		}
	}
	
	if(flag==1){
		printf("Yes %d",strlen(sale)-strlen(want));
	}else{
		printf("No %d",count);
	}

	
	return 0;
}
