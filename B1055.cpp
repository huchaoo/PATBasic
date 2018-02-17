#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

struct Stu{
	string name;
	int hei;
};

bool cmp(Stu a,Stu b){
	if(a.hei!=b.hei){
		return a.hei>b.hei;
	}else{
		return a.name<b.name;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	vector<Stu> v;
	for(int i=0;i<n;i++){
		Stu s;
		cin>>s.name>>s.hei;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),cmp);
	int row = n/k;
	int last = n - (k-1)*row;
	string result = "";
	for(int i=0;i<n;){
		if(i==0){
			result = v[i].name;
			i++;
			for(int j=1;j<last;j++){
				if(j%2==1){
					result = v[i].name + " " +result;
				}else{
					result = result + " " + v[i].name;
				}
				i++;
			}
			cout<<result<<endl;	 
		}else{
			result = v[i].name;
			i++;
			for(int j=1;j<row;j++){
				if(j%2==1){
					result = v[i].name + " " +result;
				}else{
					result = result + " " + v[i].name;
				}
				i++;
			}
			cout<<result<<endl;
		}
	}
	return 0;
}

