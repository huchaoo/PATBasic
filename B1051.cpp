#include <cstdio>
#include <cmath>
const double EPS = 1e-2;

int main(){
	double r1,p1,r2,p2;
	scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
	double a,b;
	a = r1*r2*cos(p1)*cos(p2)-r1*r2*sin(p1)*sin(p2);
	b = r1*r2*cos(p1)*sin(p2)+r1*r2*sin(p1)*cos(p2);	
	if(fabs(a)<EPS){
		printf("0.00");
	}else{
		printf("%.2f",a);
	}
	if(fabs(b)<EPS){
		printf("+0.00i");
	}else{
		if(b>0){
			printf("+%.2fi",b);
		}else if(b<0){
			printf("%.2fi",b);
		}
	}
	return 0;
}
