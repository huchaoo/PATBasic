#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	char a,b;
	int w=0,e=0,l=0;
	int cw=0,jw=0,bw=0;
	int cl=0,jl=0,bl=0;
	while(n--){
		scanf("%c %c",&a,&b);
		getchar();
		if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')){
			w++;
			if(a=='C'){
				cw++;
			}
			if(a=='J'){
				jw++;
			}
			if(a=='B'){
				bw++;
			}
		}else if((b=='C'&&a=='J')||(b=='J'&&a=='B')||(b=='B'&&a=='C')){
			l++;
			if(b=='C'){
				cl++;
			}
			if(b=='J'){
				jl++;
			}
			if(b=='B'){
				bl++;
			}
		}else{			
			e++;
		}
	}
	int amax=0,bmax=0;
	char amaxflag,bmaxflag;
	
	if(bw>amax){
		amax = bw;
		amaxflag = 'B';
	}
	if(cw>amax){
		amax = cw;
		amaxflag = 'C';
	}
	if(jw>amax){
		amax = jw;
		amaxflag = 'J';
	}

	if(bl>bmax){
		bmax = bl;
		bmaxflag = 'B';
	}
	if(cl>bmax){
		bmax = cl;
		bmaxflag = 'C';
	}
	if(jl>bmax){
		bmax = jl;
		bmaxflag = 'J';
	}
	printf("%d %d %d\n",w,e,l);
	printf("%d %d %d\n",l,e,w);
	printf("%c %c",amaxflag,bmaxflag);
	return 0;
}
