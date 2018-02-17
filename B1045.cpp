#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	sort(b,b+n);
	int c[n];
	int count = 0,max=0;
	for(i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]==max&&b[i]==a[i]){
			c[count++] = a[i];
		}
	}
//	sort(c,c+count);
	printf("%d\n",count);
	for(i=0;i<count;i++){
        if(i!=0){
        	printf(" ");	
		}  
        printf("%d",c[i]); 
	}
	printf("\n");
	return 0;
}
