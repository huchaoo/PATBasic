#include <cstdio>
#include <map>
#include <cmath>
using namespace std;

int isPrime(int x){
	int flag = 1;
	for(int i=2;i<=sqrt(x);i++){	//一定是小于等于sqrt(x) 
		if(x%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}
int main(){
	int n;
	scanf("%d",&n);
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		mp[a] = i+1;
	}
	int k;
	scanf("%d",&k);
	int check[10010] = {0};
	for(int i=0;i<k;i++){
		int q;
		scanf("%d",&q);
		if(mp.count(q)==0){
			//not find
			printf("%04d: Are you kidding?\n",q);
		}else{
			if(check[q]==1){
				//checked
				printf("%04d: Checked\n",q);
			}else{
				if(mp[q]==1){
					//champion
					printf("%04d: Mystery Award\n",q);
				}else{
					if(isPrime(mp[q])){
						//prime number
						printf("%04d: Minion\n",q);
					}else{
						printf("%04d: Chocolate\n",q);
					}
				}
				check[q] = 1;
			}
		}
	}
	return 0;
}
