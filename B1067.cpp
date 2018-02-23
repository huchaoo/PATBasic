#include <iostream>
#include <string>
using namespace std;

int main(){
	string pwd;
	int n;
	cin>>pwd>>n;
	getchar();
	int cnt = 0;
	while(1){
		string temp;
		getline(cin,temp);
		if(temp=="#"){
			break;
		}else{
			cnt++;
			if(temp!=pwd){
				cout<<"Wrong password: "<<temp<<endl;
			}else{
				cout<<"Welcome in"<<endl;
				break;
			}
		}
		if(cnt==n){
			cout<<"Account locked"<<endl;
			break;
		}
	}
	return 0;
}
