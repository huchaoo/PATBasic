#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct Node{								//定义结构体 
	int data;
	int next;
}node[100000];

int main(){
	int head,n,k;
	vector<int> v[3];
	scanf("%d%d%d",&head,&n,&k);
	for(int i=0;i<n;i++){					//输入数据 
		int add,data,next;
		scanf("%d%d%d",&add,&data,&next);
		node[add].data = data;
		node[add].next = next;
	}
	for(int p=head;p!=-1;p=node[p].next){	//遍历链表 
		int data = node[p].data;
		if(data<0){
			v[0].push_back(p);
		}else if(data>=0&&data<=k){
			v[1].push_back(p);
		}else{
			v[2].push_back(p);
		}
	}
	int flag = 0;							//输出链表 
	for(int i=0;i<3;i++){
		for(int j=0;j<v[i].size();j++){
			if(flag==0){
				printf("%05d %d ",v[i][j],node[v[i][j]].data);
				flag = 1;
			}else{
				printf("%05d\n%05d %d ",v[i][j],v[i][j],node[v[i][j]].data);
			}	
		}
	}
	printf("-1");
	return 0;
}
