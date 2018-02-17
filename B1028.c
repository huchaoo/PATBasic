#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	
	char name[n][10];
	char birth[n][20];
	
	int i;
	for(i=0;i<n;i++){
		scanf("%s %s",name[i],birth[i]);
		getchar();
	}

	int count=0;
	int maxnumber = 18140906;
	int minnumber = 20140906;
	int max = 0;
	int min = 0;
	for(i=0;i<n;i++){
		int birthnumber = (birth[i][0]-'0')*10000000+(birth[i][1]-'0')*1000000+(birth[i][2]-'0')*100000+(birth[i][3]-'0')*10000+(birth[i][5]-'0')*1000+(birth[i][6]-'0')*100+(birth[i][8]-'0')*10+(birth[i][9]-'0')*1;
		if((birthnumber)<=20140906&&(birthnumber)>=18140906){
//			printf("%s\n",birth[i]);
			count++;
			if(birthnumber>=maxnumber){
				maxnumber = birthnumber;
				max = i;
			}
			if(birthnumber<=minnumber){
				minnumber = birthnumber;
				min = i;
			}
		}
	}
	if(count==0){		//都不合法  不用输出数字	不然只有19分 
		printf("%d",count);
	}else{
		printf("%d %s %s",count,name[min],name[max]);	
	}	
	return 0;
}


