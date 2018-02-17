//BEIGIN:15:10
#include <cstdio>
#include <set>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int total[m];
	memset(total,0,sizeof(total));
	int wrongOptions[100][6] = {0};
	set<char> st[m];
	for(int i=0;i<m;i++){
		int temp,k;
		scanf("%d%d%d",&total[i],&temp,&k);
		for(int j=0;j<k;j++){
			char c;
			scanf(" %c",&c);
			st[i].insert(c);
		}
	}
	int maxWrong = 0;
	for(int i=0;i<n;i++){
		double grade = 0.0;
		getchar(); 
		for(int j=0;j<m;j++){
			if(j!=0){
				getchar();
			}
			int t;
			scanf("(%d",&t);
			set<char> ans;
			for(int p=0;p<t;p++){
				char c;
				scanf(" %c",&c);
				ans.insert(c);
			}
			scanf(")");
			if(ans == st[j]){		//full right
				grade += total[j];
			}else{
				int flag = 1;
				//wrongPick 
				for(set<char>::iterator it=ans.begin();it!=ans.end();it++){
					if(st[j].find(*it)==st[j].end()){
						//not find;
						flag = 0;
						wrongOptions[j][*it-96]++;
						if(wrongOptions[j][*it-96]>maxWrong){
							maxWrong = wrongOptions[j][*it-96];
						}
					}
				}
				//missedPick
				for(set<char>::iterator it=st[j].begin();it!=st[j].end();it++){
					if(ans.find(*it)==ans.end()){
						//not find;
						wrongOptions[j][*it-96]++;
						if(wrongOptions[j][*it-96]>maxWrong){
							maxWrong = wrongOptions[j][*it-96];
						}
					}
				}
				if(flag==1){	//half right;
					grade += (1.0/2*total[j]);
				}
			}
		}
		printf("%.1lf\n",grade);
	}
	if(maxWrong ==0){
		printf("Too simple");
	}else{
		for(int i=0;i<m;i++){
			for(int j=1;j<=5;j++){
				if(wrongOptions[i][j]==maxWrong){
					printf("%d %d-%c\n",maxWrong,i+1,j+96);
				}
			}
		}
	}
	return 0;
}
