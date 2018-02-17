#include <cstdio>
#include <set>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	set<int> st;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		//
		int res = 0;
		while(a!=0){
			res += a%10;
			a /= 10;
		}
		st.insert(res);
	}
	printf("%d\n",st.size());
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		if(it!=st.begin()){
			printf(" ");
		}
		printf("%d",*it);
	}
	return 0;
}
