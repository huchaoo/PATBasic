#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	vector<int> v;
	for(int i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	double len = v[0]*1.0;		//初始化为第一段绳子的长度 
	for(i=1;i<n;i++){			//从第二段绳子开始递归 
		len = (len+v[i])/2;		//递归过程 
	}
	printf("%d",(int)floor(len));
	return 0;
}
