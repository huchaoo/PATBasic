#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	vector<string> hands;
	vector<string> eyes;
	vector<string> mouth;
	for(int i=0,j=0;i<s1.length();i++){
		if(s1[i]=='['){
			while(j++<s1.length()){
				if(s1[j]==']'){
					hands.push_back(s1.substr(i+1,j-i-1));
					break;
				}
			}
		}
	}
	for(int i=0,j=0;i<s2.length();i++){
		if(s2[i]=='['){
			while(j++<s2.length()){
				if(s2[j]==']'){
					eyes.push_back(s2.substr(i+1,j-i-1));
					break;
				}
			}
		}
	}
	for(int i=0,j=0;i<s3.length();i++){
		if(s3[i]=='['){
			while(j++<s3.length()){
				if(s3[j]==']'){
					mouth.push_back(s3.substr(i+1,j-i-1));
					break;
				}
			}
		}
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		if(a>hands.size()||e>hands.size()||b>eyes.size()||d>eyes.size()||c>mouth.size()){
			cout<<"Are you kidding me? @\\/@"<<endl;
		}else if(a<1||b<1||c<1||d<1||e<1){
			cout<<"Are you kidding me? @\\/@"<<endl;
		}else{
			cout<<hands[a-1]<<"("<<eyes[b-1]<<mouth[c-1]<<eyes[d-1]<<")"<<hands[e-1]<<endl;
		}
	}
	return 0;
}
