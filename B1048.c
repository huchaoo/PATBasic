#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char a[101];
  char b[101];
  char c[101];
  scanf("%s %s",a,b);
  int i;
  int alen = strlen(a);
  int blen = strlen(b);
  int clen;
  //b的长度大于a的长度时 
  if(blen>=alen){
    clen = blen;
    for(i=0;i<blen-alen;i++){
      c[i] = b[i];
    }
    for(i=blen-alen;i<blen;i++){
      if((blen-i)%2!=0){
        //奇数
        if((b[i]-'0'+a[i-blen+alen]-'0')%13==10){
          c[i] = 'J';
        }else if((b[i]-'0'+a[i-blen+alen]-'0')%13==11){
          c[i] = 'Q';
        }else if((b[i]-'0'+a[i-blen+alen]-'0')%13==12){
          c[i] = 'K';
        }else{
          c[i] = (b[i]-'0'+a[i-blen+alen]-'0')%13 + '0';
		}
      }else{
        //偶数
        c[i] = (b[i]-'0')-(a[i-blen+alen]-'0')+'0';
        if((b[i]-'0')-(a[i-blen+alen]-'0')<0){
          c[i] = ((b[i]-'0')-(a[i-blen+alen]-'0')+10)+'0';
        } 
      }
    }
  }else{////b的长度小于a的长度时 
    clen = alen;
    for(i=0;i<alen-blen;i++){
		if((alen-i)%2==0){
		  //偶数
		  if(a[i]!='0'){
	        c[i] = 10-(a[i]-'0')+'0';
	      }else{
	        c[i] = '0';
	      }
		}else{
			c[i] = a[i];
		}
    }
    for(i=alen-blen;i<alen;i++){
      if((alen-i)%2!=0){
        //奇数
        if((a[i]-'0'+b[i-alen+blen]-'0')%13==10){
          c[i] = 'J';
        }else if((a[i]-'0'+b[i-alen+blen]-'0')%13==11){
          c[i] = 'Q';
        }else if((a[i]-'0'+b[i-alen+blen]-'0')%13==12){
          c[i] = 'K';
        }else{
          c[i] = (a[i]-'0'+b[i-alen+blen]-'0')%13 + '0';
		}
      }else{
        //偶数
        c[i] = (b[i-alen+blen]-'0')-(a[i]-'0')+'0';
        if((b[i-alen+blen]-'0')-(a[i]-'0')<0){
          c[i] = ((b[i-alen+blen]-'0')-(a[i]-'0')+10)+'0';
        }
      }
    }
  }
  c[clen] = '\0';
  printf("%s",c);
  return 0;
}
