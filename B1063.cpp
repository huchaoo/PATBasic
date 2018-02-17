#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	double res = 0;
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		double temp = sqrt(a*a+b*b);
		res = max(res,temp);
	}
	printf("%.2lf",res);
	return 0;
}
