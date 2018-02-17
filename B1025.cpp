#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
struct Node{
	int addr;
	int data;
	int next;
}node[100010];

int main(){
	int head,n,k;
	scanf("%d%d%d",&head,&n,&k);
	for(int i=0;i<n;i++){
		int t1,t2,t3;
		scanf("%d%d%d",&t1,&t2,&t3);
		node[t1].addr = t1;
		node[t1].data = t2;
		node[t1].next = t3;
	}
	int count=0;
	vector<int> v;
	for(int p=head;p!=-1;p=node[p].next){
		v.push_back(p);
		count++;
	}
	for(int i=0;i<count/k;i++){
		reverse(v.begin()+i*k,v.begin()+i*k+k);
	}
	for(int i=0;i<count-1;i++){
		printf("%05d %d %05d\n",node[v[i]].addr,node[v[i]].data,node[v[i+1]].addr);
	}
	printf("%05d %d -1\n",node[v[count-1]].addr,node[v[count-1]].data);
	return 0;
}
