//从大到小排序后：10 9 8 8 7 7 6 6 3 2,模拟求解过程 
//第i天骑的里程a[i]	第i天	需要有i天超过i英里	判断条件	是否满足	E 
//				10		1			1			10>1		YES			1 
//				9		2			2			9>2			YES			2
//				8		3			3			8>3			YES			3
//				8		4			4			8>4			YES			4
//				7		5			5			7>5			YES			5
//				7		6			6			7>6			YES			6
//				6		7			7			6<=7		NO			6
//				6		8			8			6<=8		NO			6
//				3		9			9			3<=9		NO			6
//				2		10			10			2<=10		NO			6
//因此可以发现：每一次判断的条件是若a[i]>i，则满足条件，更新E；否则不更新	 
#include <cstdio>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){			//大到小排序 
	return a>b;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[100010];
	int i;
	for(i=1;i<n+1;i++){			//为了不那么拗口，i从1开始编号 
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1,cmp);		//对a[1]到a[n+1]从大到小排序 
	int res = 0;				//保存结果 
	for(i=1;i<n+1;i++){			//从大的开始数 
		if(a[i]>i){				//如果第i天骑车的公里数超过i，则说明满足条件 
			res = max(res,i);	//更新res，取大值 
		}
	}
	printf("%d",res);			//输出结果 
	return 0;
}
