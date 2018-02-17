//vector版本 
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		vector<int> vi;
		int t;
		scanf("%d",&t);
		vi.push_back(t);
		int max = 0;
		int min = m;
		for(int i=1;i<n;i++){
			int t;
			scanf("%d",&t);
			if(t>=0&&t<=m){
				if(t>max){
					max = t;
				}
				if(t<min){
					min = t;
				}
				vi.push_back(t);
			}
		}
		double sum = 0.0;
		for(vector<int>::iterator it=vi.begin()+1;it!=vi.end();it++){
			sum += *it;
		}
		vector<int>::iterator it=vi.begin();
		double grade = ((sum-max-min)/(vi.size()-3)+*it)/2;
		printf("%d\n",(int)round(grade));
	}
	return 0;
}

//数组版本 
//#include <stdio.h>
//#include <math.h>
//int main(){
//	
//	int n,m;
//	scanf("%d %d",&n,&m);
//	getchar();
//	
//	int a[n][n];
//	int i,j;
//	
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//			getchar();
//		}
//	}
//	
//	for(i=0;i<n;i++){
//		int max=0;
//		int min=m;
//		int sum = 0;
//		int count = n-1;
//		for(j=1;j<n;j++){	
//			if(a[i][j]<0||a[i][j]>m){
//				a[i][j]=-1;
//				count--;
//			}	
//			if(a[i][j]>=max){
//				max = a[i][j];
//			}
//			if(a[i][j]<=min&&a[i][j]>=0){
//				min = a[i][j];
//			}
//			sum+=a[i][j];
//		}
//		double aver=0.0;
//		aver = round(((sum-max-min+n-1-count)*1.0/(count-2)+a[i][0])/2);//round函数 四舍五入  之前没加这个一直无法通过 
//		printf("%.0f",aver);
//		if(i<n-1){
//			printf("\n");
//		}
//	}
//	return 0;
//}
