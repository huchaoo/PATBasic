#include <cstdio>
#include <algorithm>

using namespace std;

const int N =111;
int origin[N],tempOri[N],changed[N];

int n;

bool isSame(int a[],int b[]){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			return false;
		}
	}
	return true;	
}

void showArray(int a[]){
	for(int i=0;i<n;i++){
		if(i!=0){
			printf(" ");
		}
		printf("%d",a[i]);
	}
	printf("\n");
}

bool isInsertSort(){
	bool flag = false;
	for(int i=1;i<n;i++){	//i´Ó1¿ªÊ¼
		if(i!=1&&isSame(tempOri,changed)){
			flag = true;
		}
		int temp = tempOri[i];
		int j = i;
		while(j>0&&tempOri[j-1]>temp){
			tempOri[j] = tempOri[j-1];
			j--;
		}
		tempOri[j] = temp;
		if(flag==true){
			return true;
		}
	}
	return false;
}

void mergeSort(){
	bool flag = false;
	for(int step = 2;step/2<=n;step*=2){
		if(step!=2&&isSame(tempOri,changed)){
			flag = true;
		}
		for(int i=0;i<n;i+=step){
			sort(tempOri+i,tempOri+min(i+step,n));
		}
		if(flag == true){
			showArray(tempOri);
			return;
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&origin[i]);
		tempOri[i] = origin[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",&changed[i]);
	}
	if(isInsertSort()){
		printf("Insertion Sort\n");
		showArray(tempOri);
	}else{
		printf("Merge Sort\n");
		for(int i=0;i<n;i++){
			tempOri[i] = origin[i];
		}
		mergeSort();
	}
	return 0;
}
