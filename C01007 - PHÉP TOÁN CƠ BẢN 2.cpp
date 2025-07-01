#include<stdio.h>
#define ll long long

int main(){
	ll a , b ; 
	scanf("%lld %lld",&a,&b) ;
	ll tong = a + b , hieu = a-b , tich = a*b ; 
	int nguyen = (int) a / b ; 
	int du = a % b ; 
	double thuc = (double) a / b ; 
	printf("%lld\n%lld\n%lld\n%d\n%d\n%.2f\n",tong,hieu,tich,nguyen,du,thuc) ; 
	return 0 ; 
}
