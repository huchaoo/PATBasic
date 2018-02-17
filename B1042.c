#include <stdio.h>

int main(){
	int a[128]={0};
	char c;
    while((c=getchar())!='\n'){
        if(c>='A'&&c<='Z'){
        	c = c+32;
            a[c]++;
        }else if(c>='a'&&c<='z'){
            a[c]++; 
        }
    }
	int max=0;
	int index;
	int i;
	for(i=0;i<128;i++){
		if(a[i]>max && (i>='a'&&i<='z')){
			max = a[i];
			index = i;
		}
	}
	printf("%c %d",index,max);
	return 0;
}

