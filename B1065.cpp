#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	scanf("%d",&n);
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		mp[a] = b;
		mp[b] = a;
	}
	scanf("%d",&m);
	int cnt=0;
	set<int> a;
	for(int i=0;i<m;i++){
		int q;
		scanf("%d",&q);
		a.insert(q);
	}
	set<int> res;
	for(set<int>::iterator it=a.begin();it!=a.end();it++){
		if(mp.count(*it)==0){
			cnt++;
			res.insert(*it);
		}else{
			int spouse = mp[*it];
			if(a.find(spouse)==a.end()){
				cnt++;
				res.insert(*it);
			}
		}
	}
	printf("%d\n",res.size());
	for(set<int>::iterator it=res.begin();it!=res.end();it++){
		if(it!=res.begin()){
			printf(" ");
		}
		printf("%05d",*it);		//²¹È«0 
	}
	return 0;
}
