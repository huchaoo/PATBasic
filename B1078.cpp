#include <iostream>
#include <string>
using namespace std;

int main(){
	char c;
	string s;
	cin>>c;
	getchar();				//取走换行符 
	getline(cin,s);
	if(c=='C'){
		int cnt=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]){				//重复出现的字符 
				cnt++;							//数量++ 
			}else{
				if(cnt!=1){					//如果大于1个就输出cnt和字符 
					cout<<cnt<<s[i];
					cnt=1;					//重新初始化 
				}else{
					cout<<s[i];
				}
			}
		}
	}else{
		int cnt=0;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){		//将字符串转为数字，记录个数 
				cnt = cnt*10 + (s[i]-'0');
			}else{
				if(cnt!=0){					//如果数量不为0，说明有重复字符 
					for(int j=0;j<cnt;j++){	//输出cnt个字符 
						cout<<s[i];
					}
					cnt = 0;
				}else{
					cout<<s[i];				//否则输出原字符 
				}
			}
		}
	}
	return 0;
}
