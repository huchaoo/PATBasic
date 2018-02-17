#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n,m;
  scanf("%d",&n);
  getchar();//getchar()把这个回车符取走 
  char num[n][15];//末尾加上'\0'所以要多一个char的空间 
  int a[n];
  int b[n];
  int i;
  for(i=0;i<n;i++){
	scanf("%s%d%d",num[i],&a[i],&b[i]);
  }
  scanf("%d",&m);
  getchar();
  int q;
  while(m!=0){
    scanf("%d",&q);
    for(i=0;i<n;i++){
      if(q==a[i]){
        printf("%s %d\n",num[i],b[i]);
      }
    }
    m--;
  }
  return 0;
}
