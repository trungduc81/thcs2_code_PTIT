#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int tu, mau;
} PhanSo;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return a / gcd(a, b) * b;
}

void quydong(PhanSo *a, PhanSo *b){
    int gcd1 = gcd(a->tu,a->mau) ;
    a->tu /= gcd1 ; a->mau /= gcd1 ;
    int gcd2 = gcd(b->tu,b->mau) ;
    b->tu /= gcd2 ; b->mau /= gcd2 ;

	int bcnn= lcm(a->mau, b->mau);
	int hsa = bcnn / a->mau;
	int hsb = bcnn / b->mau;

	a->tu *= hsa ;
	b->tu *= hsb ;
	a->mau = b->mau = bcnn ;


	printf("%d/%d %d/%d\n", a->tu, a->mau, b->tu, b->mau);
}

void tong(PhanSo a, PhanSo b){
	PhanSo res;
	res.tu = a.tu + b.tu;
	res.mau = a.mau ;
	int ucln = gcd(res.tu, res.mau) ;
	res.tu /= ucln ;
	res.mau /= ucln ;
	printf("%d/%d\n", res.tu, res.mau);
}

void thuong(PhanSo a, PhanSo b){
	PhanSo res ;
	res.tu = a.tu * b.mau ;
	res.mau = a.mau * b.tu ;
	int ucln = gcd(res.tu, res.mau) ;
	res.tu /= ucln ;
	res.mau /= ucln ;
	printf("%d/%d\n",res.tu, res.mau) ;
}
int T = 1 ;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		PhanSo a, b;
		scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
		printf("Case #%d:\n",T) ;
		quydong(&a, &b);
		tong(a, b);
		thuong(a, b);
		T++ ;
	}

}
