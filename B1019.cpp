#include <cstdio>
#include <algorithm>

using namespace std;

int circle(int a){		//circle函数，返回Max-Min的值 
	int res[4] = {0};	//记得初始化为全0，不然会出现段错误 
	int i=0;
	while(a!=0){		//将a的每一位存在数组中 
		res[i++] = a%10;
		a /= 10;
	}
	sort(res,res+4);	//a的每一位按照从小到大排序 
	int max = res[3]*1000+res[2]*100+res[1]*10+res[0];	//转化出最大值 
	int min = res[0]*1000+res[1]*100+res[2]*10+res[3];	//转化出最小值 
	int next = max - min ;	//最大最小值之差 
	printf("%04d - %04d = %04d\n",max,min,next);
	return next;	//返回这个结果 
}

int main(){
	int a;
	scanf("%d",&a);
	int flag = 1;
	while(flag){
		a = circle(a);	//递归调用circle(a) 
		if(a == 0||a == 6174){	//当a为0或6174时，就退出循环 
			flag = 0;
		}
	}
	return 0;
}
