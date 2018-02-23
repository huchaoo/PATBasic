#include <string>
#include <iostream>
#include <map>
using namespace std;

int main(){
	int m,n,s;
	cin>>m>>n>>s;
	getchar();
	map<string,int> mp;
	int flag = 0;
	for(int i=0;i<m;i++){
		string temp;
		cin>>temp;
		if(mp[temp]==1){
			s = s+1;
		}
		if(i+1==s&&mp[temp]==0){
			mp[temp] = 1;
			flag = 1;
			cout<<temp<<endl;
			s = s+n;
		}
	}
	if(flag==0){
		cout<<"Keep going...";
	}
	return 0;
}
