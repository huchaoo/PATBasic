#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct Student{
	string id;
	int gp,gm,gf,ga;
	//结构体初始化 
	Student(string nm="",int p=-1,int m=-1,int f=-1,int a=0):id(nm),gp(p),gm(m),gf(f),ga(a){};
};

bool cmp(Student a,Student b){
	if(a.ga!=b.ga){
		return a.ga>b.ga;
	}else{
		return a.id<b.id;
	}
}

//姓名到结构体的映射 
map<string,Student> mp;

int main(){
	int p,m,n;
	cin>>p>>m>>n;
	for(int i=0;i<p;i++){
		string name;
		int t;
		cin>>name>>t;
		mp[name] = Student(name,t,-1,-1,0);
	}
	for(int i=0;i<m;i++){
		string name;
		int t;
		cin>>name>>t;
		if(mp.count(name)==0){
			//如果之前没有这个人 
			mp[name] = Student(name,-1,t,-1,0);
		}else{
			//之前有这个人 
			mp[name].gm = t;
		}
	}
	for(int i=0;i<n;i++){
		string name;
		int t;
		cin>>name>>t;
		if(mp.count(name)==0){
			mp[name] = Student(name,-1,-1,t,0);
		}else{
			mp[name].gf = t;
		}
	}
	vector<Student> v;		//保存满足条件的Student的vector 
	for(map<string,Student>::iterator it=mp.begin();it!=mp.end();it++){
		Student st = it->second;
		if(st.gp>=200){
			if(st.gm>st.gf){
				st.ga = (int)round(0.4*st.gm+0.6*st.gf);
			}else{
				st.ga = st.gf;
			}
			if(st.ga>=60){			//满足条件，则添加进vector 
				v.push_back(st);
			}
		}
	}
	sort(v.begin(),v.end(),cmp);	//排序 
	for(int i=0;i<v.size();i++){	//输出 
		cout<<v[i].id<<" "<<v[i].gp<<" "<<v[i].gm<<" "<<v[i].gf<<" "<<v[i].ga<<endl;
	}
	return 0;
}
