#include <cstdio>

int main(){
	int total,k;
	scanf("%d%d",&total,&k);
	for(int i=0;i<k;i++){
		int n1,b,t,n2;
		scanf("%d%d%d%d",&n1,&b,&t,&n2);
		if(t>total){
			printf("Not enough tokens.  Total = %d.\n",total);
		}else{
			if((n2>n1&&b==1)||(n2<n1&&b==0)){
				//win
				total += t;
				printf("Win %d!  Total = %d.\n",t,total);
			}else{
				//lose
				total -= t;
				printf("Lose %d.  Total = %d.\n",t,total);
				if(total<=0){
					printf("Game Over.\n");
					break;
				}
			}
		}
	}
	return 0;
}
