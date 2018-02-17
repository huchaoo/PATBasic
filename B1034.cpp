#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

struct Fraction{
	ll up,down;
}a,b;
 
ll gcd(ll a,ll b){
	return b==0?a:gcd(b,a%b);
}

Fraction reduction(Fraction f){		//重点，有点不熟悉 
	if(f.down<0){			//负数 
		f.up = -f.up;
		f.down = -f.down;
	}
	if(f.up==0){
		f.down = 1;
	}else{
		int d = gcd(abs(f.up),f.down);	//先要取得最大公约数，再同除 
		f.up /= d;
		f.down /= d;
	}
	return f;
}

void show(Fraction f){
	f = reduction(f);	//先化简 
	if(f.up<0){			//负数 
		printf("(");
	}
	if(f.down == 1){	//整数 
		printf("%lld",f.up);
	}else if(abs(f.up)>f.down){		//假分数 
		printf("%lld %lld/%lld",f.up/f.down,abs(f.up)%f.down,f.down);
	}else{				//真分数 
		printf("%lld/%lld",f.up,f.down);
	}
	if(f.up<0){			//负数 
		printf(")");
	}
}

Fraction add(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.down+f1.down*f2.up;
	res.down = f1.down*f2.down;
	return reduction(res);	
}

Fraction minu(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.down-f1.down*f2.up;
	res.down = f1.down*f2.down;
	return reduction(res);	
}

Fraction multi(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.up;
	res.down = f1.down*f2.down;
	return reduction(res);	
}

Fraction devide(Fraction f1,Fraction f2){
	Fraction res;
	res.up = f1.up*f2.down;
	res.down = f1.down*f2.up;
	return reduction(res);	
}

int main(){
	scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);
	//add
	show(a);
	printf(" + ");
	show(b);
	printf(" = ");
	show(add(a,b));
	printf("\n");
	//minus
	show(a);
	printf(" - ");
	show(b);
	printf(" = ");
	show(minu(a,b));
	printf("\n");
	//multi
	show(a);
	printf(" * ");
	show(b);
	printf(" = ");
	show(multi(a,b));
	printf("\n");
	//devide
	show(a);
	printf(" / ");
	show(b);
	printf(" = ");
	if(b.up==0){
		printf("Inf");
	}else{
		show(devide(a,b));
	}
	return 0;
}

////作者：FlyRush
////链接：https://www.jianshu.com/p/9f2e6f3c112c
////來源：简书
////著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//#include <stdio.h>
//
////辗转相除法求最大公约数 
//int gcd(long long a, long long b){
//	//当b为0时，a为最大公约数
//	//否则a = b, b= a%b;
//    return b == 0 ? a : gcd(b, a % b); 
//}
//
////按照个数输出最简形式的分数 
//void print(long long a, long long b){
//    long long c = 0; //带分数前面的整数部分，默认是0
//    if(a > 0){ //正数
//        if(b == 1){ //形如3/1
//            printf("%lld", a);
//        }
//        else if(a > b){ //形如5/3
//            c = a / b;
//            a -= b * c;
//            printf("%lld %lld/%lld", c, a, b);
//        }
//        else{ //真分数 形如3/5
//            printf("%lld/%lld", a, b);
//        }
//    }
//    else if(a == 0){ //形如0/3
//        printf("%c", '0');
//    }
//    else{ //负数
//        if(b == 1){ //形如-3/1
//            printf("(%lld)", a);
//        }
//        else if(-1 * a > b){ //形如-5/3
//            c = a / b;
//            a = (-1 * a) % b;
//            printf("(%lld %lld/%lld)", c, a, b);
//        }
//        else{ //真分数
//            printf("(%lld/%lld)", a, b);
//        }
//    }
//}
//
////加法 
//void add(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" + ");
//    print(a2, b2);
//    printf(" = ");
//    long long a3 = a1 * b2 + a2 * b1; 
//    long long b3 = b1 * b2;
//    //加法：分子分母交叉相乘成为新的分子，分母相乘形成新的分母 
//    //化简到最简形式，非带分数形式
//    long long gcd3 = abs(gcd(a3, b3));
//    a3 /= gcd3;
//    b3 /= gcd3;
//    print(a3, b3);
//    printf("\n");
//}
//
//void subtract(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" - ");
//    print(a2, b2);
//    printf(" = ");
//    long long a3 = a1 * b2 - a2 * b1;
//    long long b3 = b1 * b2;
//    //减法：分子分母交叉相减成为新的分子，分母相乘形成新的分母 
//    //化简到最简形式，非带分数形式
//    long long gcd3 = abs(gcd(a3, b3));
//    a3 /= gcd3;
//    b3 /= gcd3;
//    print(a3, b3);
//    printf("\n");
//}
//
//void multiply(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" * ");
//    print(a2, b2);
//    printf(" = ");
//    long long a3 = a1 * a2;
//    long long b3 = b1 * b2;
//    //乘法：分子相乘成为新的分子，分母相乘形成新的分母 
//    //化简到最简形式，非带分数形式
//    long long gcd3 = abs(gcd(a3, b3));
//    a3 /= gcd3;
//    b3 /= gcd3;
//    print(a3, b3);
//    printf("\n");
//}
//
//void divide(long long a1, long long b1, long long a2, long long b2){
//    print(a1, b1);
//    printf(" / ");
//    print(a2, b2);
//    printf(" = ");
//    if(a2 == 0){
//        printf("Inf");
//    }
//    else if(a2 < 0){
//        long long a3 = -1 * a1 * b2;
//        long long b3 = -1 * b1 * a2;
//        //除法：(a1/b1)/(a2/b2) = (a1/b1)*(b2/a2) = (a1*b2)/(a2*b1);
//        //化简到最简形式，非带分数形式
//        long long gcd3 = abs(gcd(a3, b3));
//        a3 /= gcd3;
//        b3 /= gcd3;
//        print(a3, b3);
//    }
//    else{
//        long long a3 = a1 * b2;
//        long long b3 = b1 * a2;
//        //化简到最简形式，非带分数形式
//        long long gcd3 = abs(gcd(a3, b3));
//        a3 /= gcd3;
//        b3 /= gcd3;
//        print(a3, b3);
//    }
//    printf("\n");
//}
//
//int main(){
//    long long a1, b1, a2, b2;
//    long long c1 = 0, c2 = 0;
//    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
//    //先化简到最简形式，非带分数形式
//    long long gcd1 = abs(gcd(a1, b1));//最大公约数1 
//    a1 /= gcd1;
//    b1 /= gcd1;
//    long long gcd2 = abs(gcd(a2, b2));//最大公约数2 
//    a2 /= gcd2;
//    b2 /= gcd2;
//    //统一用最简形式参与运算
//    add(a1, b1, a2, b2);
//    subtract(a1, b1, a2, b2);
//    multiply(a1, b1, a2, b2);
//    divide(a1, b1, a2, b2);
//    return 0;
//}


