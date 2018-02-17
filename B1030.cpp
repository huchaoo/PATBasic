#include <cstdio>
#include <algorithm>

using namespace std;

////二分思想 
//int main(){
//	int n,p;
//	scanf("%d%d",&n,&p);
//	int a[n];
//	int i;
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,a+n);	//按递增顺序排序
//	int ans = 1;	//保存结果，初值为1 
//	for(i=0;i<n;i++){
//		int j = upper_bound(a+i+1,a+n,(long long)a[i]*p) -a;	//求j的位置
//		ans = max(ans,j-i);	//求ans和j的最大值，algorithm库中的max()函数
//	}
//	printf("%d",ans);
//	return 0;
//}

//two pointers 思想
int main(){
	int n,p;
	scanf("%d%d",&n,&p);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int i=0,j=0,count=1;
	while(j<n&&i<n){	//i或j都没到达末端时就继续循环 
		//当 a[j]<=(long long)a[i]*p时更新count，并且让j右移 
		if(a[j]<=(long long)a[i]*p){
			count = max(count,j-i+1);	//更新计数器 
			j++;
		}else{	//当那个条件不满足时，i右移 
			i++;
		}
	}
	printf("%d",count);
	return 0;
} 
