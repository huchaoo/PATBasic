#include<iostream>
#include<string>

using namespace std;

int main(){
    string str,ans;		//ans：用string保存商 
    int n,d = 0;		//余数和除数都用int保存 
    cin >> str >> n;	//输入大数，用string保存 
    for(int i = 0; i <= str.size()-1; i++){
		int current = d * 10 + (str[i]-'0');	//每一步的临时被除数：当前这一位加上余数*10 
		ans += (current / n+'0');	//string拼接每一步商，商=临死被除数/n 
		d = current % n;	//每一步余数 
    }
    for(int i = (ans[0] == '0' && ans.size()!=1)?1:0; i < ans.size(); i++){	//保证第一位的0不输出 
    	cout << ans[i];	
	}
    cout << " " << d;
    return 0;
}

