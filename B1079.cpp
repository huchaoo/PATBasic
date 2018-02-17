#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a){
	string b = a;
	reverse(b.begin(),b.end());
	string ans;
	int len = a.length();
	int carry = 0;
	for(int i=0;i<len;i++){
		int current = (a[i]-'0')+(b[i]-'0')+carry;
		carry = current/10;
		ans += (current%10+'0');
	}
	if(carry==1){
		ans += '1';
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

int main(){
	string str;
	cin>>str;
	int cnt = 0;	
	while(cnt<10){
		string t = str;
		reverse(t.begin(),t.end());
		if(t==str){
			cout<<str<<" is a palindromic number.";
			break;
		}else{
            cout<<str<<" + "<<t<<" = "<<add(str)<<endl;
            str=add(str);
            cnt++;
        }
	}
	if(cnt==10){
		cout<<"Not found in 10 iterations.";
	}
	return 0;
}
