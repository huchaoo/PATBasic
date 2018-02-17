#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	set<int> st;
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		st.insert(temp);
	}
	int pcnt = 0,scnt=0;
	for(int i=0;i<n;i++){
		string str;
		int temp;
		cin>>str>>temp;
		vector<int> v;
		for(int j=0;j<temp;j++){
			int stuff;
			cin>>stuff;
			if(st.find(stuff)!=st.end()){
				//find
				v.push_back(stuff);
			}
		}
		if(v.size()!=0){
			pcnt++;
			scnt+=v.size();
			cout<<str<<":";
			for(int j=0;j<v.size();j++){
//				cout<<" "<<v[j];
				printf(" %04d",v[j]);		//格式问题需要注意 
			}
			cout<<endl;
		}
	}
	cout<<pcnt<<" "<<scnt;
	return 0;
} 

////#include <stdio.h>
////
////int main(){
////	int number,type;
////	scanf("%d %d",&number,&type);
////	int a[type];
////	int i;
////	for(i=0;i<type;i++){
////		scanf("%d",&a[i]);
////	}
////	char name[4];
////	int k[10];
////	int goods[10];
////	for(i=0;i<number;i++){
////		scanf("%s %d",&name,&k[i]);
////		int j=0;
////		for(j=0;j<k;j++){
////			scanf("%d",&goods[j]);
////		}
////	}
//////	for(i=0;i<number;i++){
//////		printf("%s %d",name[i],k);
//////		int j=0;
//////		for(j=0;j<k;j++){
//////			printf("%d",goods[j]);
//////		}
//////	}
////	for(i=0;i<number;i++){
////		printf("%s %d\n",&name,&k);
////	}
////	return 0;
////}
//
////别人写的 网址https://www.cnblogs.com/huyuan1004/p/7542662.html
//#include <stdio.h>
//
//int main()
//{
//    int n,m,i,j,k,tmp;
//    scanf("%d %d",&n,&m);//n学生人数 m被查的物品种类数 
//    char p[5];//姓名 
//    int num[10000] = {0};//
//    
//    for(i = 0;i < m;i++)
//    {
//        scanf("%d",&tmp);//输入被查物品种类的号码 
//        num[tmp]++;  
//    }
//    int flag,sum1 = 0,sum2 = 0;
//    for(i = 0;i < n;i++)
//    {    
//        flag = 0;
//        scanf("%s %d",p,&k);//第i个学生的姓名和个人物品数量 
//        getchar();//读取一个字符 
//        for(j = 0;j < k;j++)
//        {
//            scanf("%d",&tmp);                                    
//            if(num[tmp])
//            {
//                if(!flag)
//                {
//                    printf("%s:",p);            
//                    flag = 1;
//                    sum1++;
//                }
//                printf(" %04d",tmp);
//                sum2++;
//            }    
//        }
//        if(flag)
//            printf("\n");                
//    }
//    printf("%d %d\n",sum1,sum2);
//    
//    return 0;
//}
///*
//4 2
//2333 6666
//CYLL 3 1234 2345 3456
//U 4 9966 6666 8888 6666
//GG 2 2333 7777
//JJ 3 0012 6666 2333
//*/
//
///*
//他代码的输出是在每个同学输入玩就输出  不是所有一起输出   pat官网显示没错误 
//*/
