#include <stdio.h>

int main(){
	int p1,p2,p3;
	int a1,a2,a3;
	scanf("%d.%d.%d %d.%d.%d",&p1,&p2,&p3,&a1,&a2,&a3);
	int p,a;
	p = p3+29*p2+17*29*p1;
	a = a3+29*a2+17*29*a1;
	
//	if(a>=p){
//		printf("%d.%d.%d",(a-p)/493,(a-p)%493/29,(a-p)%493%29);
//	}else{
//		printf("-");
//		printf("%d.%d.%d",(p-a)/493,(p-a)%493/29,(p-a)%493%29);
//	}
	
	//abs(x) 整数的绝对值
	//fabs(x) 浮点数的绝对值 
	if(a<p){
		printf("-");
	}	
	printf("%d.%d.%d",abs(a-p)/493,abs(a-p)%493/29,abs(a-p)%493%29);

	return 0;
}
