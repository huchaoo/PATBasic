#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	int a;
	int a1=0,ca1=0,a2=0,ca2=0,a3=0,a4=0,ca4=0,a5=0,ca5=0;
	int flag = 1;
	while(n--){
		scanf("%d",&a);
		if(a%5==0){
			if(a%2==0){
				a1+=a;
				ca1++;	
			} 
		}else if(a%5==1){
			a2 = a2+flag*a;
			flag = -flag;
			ca2++;
		}else if(a%5==2){
			a3++; 
		}else if(a%5==3){
			a4+=a;
			ca4++;
		}else if(a%5==4){
			if(a>a5){
				a5 = a;
			}
			ca5++;
		}
	}
	if(ca1==0){
		printf("N ");
	}else{
		printf("%d ",a1);
	}
	if(ca2==0){
		printf("N ");
	}else{
		printf("%d ",a2);
	}
	if(a3==0){
		printf("N ");
	}else{
		printf("%d ",a3);
	}
	if(ca4==0){
		printf("N ");
	}else{
		printf("%.1f ",a4*1.0/ca4);
	}
	if(ca5==0){
		printf("N");
	}else{
		printf("%d",a5);
	}
	return 0;
}
